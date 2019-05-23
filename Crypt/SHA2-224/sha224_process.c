/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha224_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:25:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 12:12:45 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**     I used the following links:
**
**        • https://en.wikipedia.org/wiki/SHA-2#Pseudocode
**
**
**  [DEFINITIONS] :
**
**     •  All variables are unsigned 32 bit and wrap modulo 2^32 when
**        calculating.
**
**     •  The digest a 224-bit string is divided into seven 32-bit words,
**        denoted a, b, c, d, e, f and g; these 7 variables plus an extra
**        32-bit word will be held in the 't_sha224ctx' structure and used
**        in the compression function.
**
**        They are initialized to certain fixed constants (given by the
**        SHA224 specification).
**
**     •  'ctx->schedule' specifies the per-round message schedule array
**        [0..63] of 32 bit words, different with every chunk.
**
**     •  'g_k' specifies the per-round constants (given by the SHA224
**        specification).
**
**     •  For each round, there is one round constant k[i] and one entry
**        in the message schedule array ctx->schedule[i], 0 ≤ i ≤ 63
**
**     •  Big-endian convention is used when expressing the constants in
**        this pseudocode, and when parsing message block data from bytes
**        to words, for example, the first word of the input message "abc"
**        after padding is 0x61626380
*/

#include "ft_sha224.h"

/*
**    DESCRIPTION
**         Pre-round constants.
*/

const uint32_t g_sha224_k[64] =
{
	0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
	0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,

	0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
	0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,

	0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
	0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,

	0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
	0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,

	0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
	0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,

	0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
	0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,

	0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
	0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,

	0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
	0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

/*
**    DESCRIPTION
**         Initialization of the 32 bit words denoted A, B, C, D, E, F,
**         G & H.
*/

void				sha224_init(t_sha224ctx *ctx)
{
	ctx->bitlen = 0;
	A = 0xc1059ed8;
	B = 0x367cd507;
	C = 0x3070dd17;
	D = 0xf70e5939;
	E = 0xffc00b31;
	F = 0x68581511;
	G = 0x64f98fa7;
	H = 0xbefa4fa4;
	return ;
}

/*
**    DESCRIPTION
**         Updates the context chunk & the pointer of where we
**         are in the message ; also keeps track of the total
**         length of the message.
*/

ssize_t				sha224_update(t_sha224ctx *ctx, void **data, int flag)
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
		ctx->bitlen = *(uint64_t *)ft_to_big_endian(&ctx->bitlen, 8);
		*(uint64_t *)&ctx->chunk[56] = ctx->bitlen;
		bit_added = false;
		return (0);
	}
	return (ret);
}

/*
**    DESCRIPTION
**         Denotes the transformation that each message chunk
**         goes through.
*/

void				sha224_transform(t_sha224ctx *ctx)
{
	t_sha224ctx		ctx_prime;
	uint64_t		tmp1;
	uint64_t		tmp2;
	int8_t			i;

	sha224_schedule(ctx);
	sha224_transform_init(ctx, &ctx_prime);
	i = -1;
	while (++i < SHA224_TOTAL_ROUNDS)
	{
		tmp1 = ((H1 + SHA2_224_SUM1(E1) + CH(E1, F1, G1) + g_sha224_k[i]
				+ ctx->schedule[i])
				% UINT64_MAX);
		tmp2 = ((SHA2_224_SUM0(A1) + MAJ(A1, B1, C1)) % UINT64_MAX);
		H1 = G1;
		G1 = F1;
		F1 = E1;
		E1 = ((D1 + tmp1) % UINT64_MAX);
		D1 = C1;
		C1 = B1;
		B1 = A1;
		A1 = ((tmp1 + tmp2) % UINT64_MAX);
	}
	sha224_transform_final(ctx, &ctx_prime);
	return ;
}

/*
**    DESCRIPTION
**         Appends the 32 bit words to each other (denoted as A, B, C, D,
**         E, F & G) to construct the final digest.
*/

void				sha224_final(t_sha224ctx *ctx, char **digest)
{
	if (!((*digest) = (char *)ft_malloc(SHA224_DIGEST_LENGTH + 1, '\0')))
		EXIT(ft_printf("Error: %s{underlined}", strerror(errno)));
	*(uint32_t *)&(*digest)[0] = *(uint32_t *)ft_to_big_endian(&A, 4);
	*(uint32_t *)&(*digest)[4] = *(uint32_t *)ft_to_big_endian(&B, 4);
	*(uint32_t *)&(*digest)[8] = *(uint32_t *)ft_to_big_endian(&C, 4);
	*(uint32_t *)&(*digest)[12] = *(uint32_t *)ft_to_big_endian(&D, 4);
	*(uint32_t *)&(*digest)[16] = *(uint32_t *)ft_to_big_endian(&E, 4);
	*(uint32_t *)&(*digest)[20] = *(uint32_t *)ft_to_big_endian(&F, 4);
	*(uint32_t *)&(*digest)[24] = *(uint32_t *)ft_to_big_endian(&G, 4);
	(*digest)[28] = '\0';
	return ;
}
