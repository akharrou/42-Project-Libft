/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:49:59 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 12:13:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**     I used the following links:
**
**        • https://www.ietf.org/rfc/rfc1321.txt
**        • https://en.wikipedia.org/wiki/MD5#Algorithm
**        • https://openwall.info/wiki/people/solar/software/public-domain-
**          source-code/md5
**
**
**  [DEFINITIONS] :
**
**     •  All variables are unsigned 32 bit and wrap modulo 2^32 when
**        calculating
**
**     •  The digest a 128-bit ctx is divided into four 32-bit words,
**        denoted a, b, c, and d; these 4 variables will be held in the
**        't_md5ctx' structure.
**
**        They are initialized to certain fixed constants (given by the MD5
**        specification).
**
**     •  's' specifies the per-round shift amounts (given by the MD5
**        specification).
**
**     •  'k' specifies the per-operation constants (given by the MD5
**        specification).
**
**     •  'm' specifies an array of 32-bit blocks that a message chunk gets
**        sub-divided in.
**
**     •  'f' is a placeholder for the padded_message of the ctx variables
**        passed to a non-linear function (the function is differs every 16
**        operations)
**
**     •  'i' denotes the i'th operation we are at.
**
**     •  'g' serves as an index to grab a certain 32-bit block in a chunk.
**        'm'. 'm[g]' denotes one 32-bit block of the message input.
*/

#include "ft_md5.h"

uint32_t g_md5_s[64] =
{
	7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
	5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
	4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
	6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21
};

uint32_t g_md5_k[64] =
{
	0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
	0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
	0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
	0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
	0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
	0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
	0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
	0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
	0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
	0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
	0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
	0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
	0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
	0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
	0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
	0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
};

/*
**    DESCRIPTION
**         Initialization of the 32 bit words denoted A, B, C & D.
*/

void			md5_init(t_md5ctx *ctx)
{
	ctx->bitlen = 0;
	A = 0x67452301;
	B = 0xefcdab89;
	C = 0x98badcfe;
	D = 0x10325476;
	return ;
}

/*
**    DESCRIPTION
**         Updates the context buffer & the pointer of where we
**         are in the string/file ; also keeps track of the total
**         length of the buffer/file.
*/

ssize_t			md5_update(t_md5ctx *ctx, void **data, int flag)
{
	static bool		bit_added;
	ssize_t			ret;

	ft_bzero(ctx->chunk, 64);
	if (flag & O_FD)
		ret = read(*((int *)(*data)), ctx->chunk, 64);
	if (flag & O_BUF)
	{
		ret = ft_strnlen(ft_strncpy(ctx->chunk, (char *)(*data), 64), 64);
		*((char **)data) += ret;
	}
	ctx->bitlen = ((ctx->bitlen + (ret * 8)) % UINT32_MAX);
	if (0 <= ret && ret < 64 && bit_added == false)
	{
		ctx->chunk[ret] = (char)(1 << 7);
		bit_added = true;
	}
	if (0 <= ret && ret < 56)
	{
		*(uint64_t *)&ctx->chunk[56] = ctx->bitlen;
		bit_added = false;
		return (0);
	}
	return (ret);
}

/*
**    DESCRIPTION
**         Denotes the transformation (64 operations) that each message chunk
**         goes through.
*/

void			md5_transform(t_md5ctx *ctx)
{
	t_md5ctx	ctx_prime;
	uint32_t	i;
	uint32_t	f;
	uint32_t	g;

	A1 = A;
	B1 = B;
	C1 = C;
	D1 = D;
	i = 0;
	while (i < MD5_TOTAL_OPERATIONS)
	{
		md5_operation(&ctx_prime, i, (uint32_t *)&f, (uint32_t *)&g);
		f = ((f + A1 + g_md5_k[i] + MD5_M(g)) % UINT32_MAX);
		A1 = D1;
		D1 = C1;
		C1 = B1;
		B1 = ((B1 + ROTATE_32BITS_LEFT(f, g_md5_s[i])) % UINT32_MAX);
		++i;
	}
	A = ((A + A1) % UINT32_MAX);
	B = ((B + B1) % UINT32_MAX);
	C = ((C + C1) % UINT32_MAX);
	D = ((D + D1) % UINT32_MAX);
	return ;
}

/*
**    DESCRIPTION
**         Appends the 32 bit words to each other (denoted as A, B, C, D) to
**         construct the final digest.
*/

void			md5_final(t_md5ctx *ctx, char **digest)
{
	if (!((*digest) = (char *)ft_malloc(MD5_DIGEST_LENGTH + 1, '\0')))
		EXIT(ft_printf("Error: %s{underlined}", strerror(errno)));
	*(uint32_t *)&(*digest)[0] = A;
	*(uint32_t *)&(*digest)[4] = B;
	*(uint32_t *)&(*digest)[8] = C;
	*(uint32_t *)&(*digest)[12] = D;
	(*digest)[16] = '\0';
	return ;
}
