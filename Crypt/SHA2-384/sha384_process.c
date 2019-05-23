/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha384_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:25:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 12:13:39 by akharrou         ###   ########.fr       */
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
**     •  All variables are unsigned 64 bit and wrap modulo 2^64 when
**        calculating.
**
**     •  The digest a 384-bit string is divided into 6 64-bit words,
**        denoted a, b, c, d, e and f; these 6 variables will be plus
**        two helper ones are held in the 't_sha384ctx' structure and
**        used in the compression function.
**
**        They are initialized to certain fixed constants (given by the
**        SHA384 specification).
**
**     •  'ctx->schedule' specifies the per-round message schedule array
**        [0..79] of 64 bit words, different with every chunk.
**
**     •  'g_k' specifies the per-round constants (given by the SHA384
**        specification).
**
**     •  For each round, there is one round constant k[i] and one entry
**        in the message schedule array ctx->schedule[i], 0 ≤ i ≤ 79
**
**     •  Big-endian convention is used when expressing the constants in
**        this pseudocode, and when parsing message block data from bytes
**        to words.
*/

#include "ft_sha384.h"

/*
**    DESCRIPTION
**         Pre-round constants.
*/

const uint64_t g_sha384_k[80] =
{
	0x428a2f98d728ae22, 0x7137449123ef65cd,
	0xb5c0fbcfec4d3b2f, 0xe9b5dba58189dbbc,
	0x3956c25bf348b538, 0x59f111f1b605d019,
	0x923f82a4af194f9b, 0xab1c5ed5da6d8118,
	0xd807aa98a3030242, 0x12835b0145706fbe,
	0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2,
	0x72be5d74f27b896f, 0x80deb1fe3b1696b1,
	0x9bdc06a725c71235, 0xc19bf174cf692694,
	0xe49b69c19ef14ad2, 0xefbe4786384f25e3,
	0x0fc19dc68b8cd5b5, 0x240ca1cc77ac9c65,
	0x2de92c6f592b0275, 0x4a7484aa6ea6e483,
	0x5cb0a9dcbd41fbd4, 0x76f988da831153b5,
	0x983e5152ee66dfab, 0xa831c66d2db43210,
	0xb00327c898fb213f, 0xbf597fc7beef0ee4,
	0xc6e00bf33da88fc2, 0xd5a79147930aa725,
	0x06ca6351e003826f, 0x142929670a0e6e70,
	0x27b70a8546d22ffc, 0x2e1b21385c26c926,
	0x4d2c6dfc5ac42aed, 0x53380d139d95b3df,
	0x650a73548baf63de, 0x766a0abb3c77b2a8,
	0x81c2c92e47edaee6, 0x92722c851482353b,
	0xa2bfe8a14cf10364, 0xa81a664bbc423001,
	0xc24b8b70d0f89791, 0xc76c51a30654be30,
	0xd192e819d6ef5218, 0xd69906245565a910,
	0xf40e35855771202a, 0x106aa07032bbd1b8,
	0x19a4c116b8d2d0c8, 0x1e376c085141ab53,
	0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8,
	0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb,
	0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3,
	0x748f82ee5defb2fc, 0x78a5636f43172f60,
	0x84c87814a1f0ab72, 0x8cc702081a6439ec,
	0x90befffa23631e28, 0xa4506cebde82bde9,
	0xbef9a3f7b2c67915, 0xc67178f2e372532b,
	0xca273eceea26619c, 0xd186b8c721c0c207,
	0xeada7dd6cde0eb1e, 0xf57d4f7fee6ed178,
	0x06f067aa72176fba, 0x0a637dc5a2c898a6,
	0x113f9804bef90dae, 0x1b710b35131c471b,
	0x28db77f523047d84, 0x32caab7b40c72493,
	0x3c9ebe0a15c9bebc, 0x431d67c49c100d4c,
	0x4cc5d4becb3e42b6, 0x597f299cfc657e2a,
	0x5fcb6fab3ad6faec, 0x6c44198c4a475817
};

/*
**    DESCRIPTION
**         Initialization of the 64 bit words denoted A, B, C, D, E, F,
**         G & H.
*/

void				sha384_init(t_sha384ctx *ctx)
{
	ctx->bitlen = 0;
	A = 0xcbbb9d5dc1059ed8;
	B = 0x629a292a367cd507;
	C = 0x9159015a3070dd17;
	D = 0x152fecd8f70e5939;
	E = 0x67332667ffc00b31;
	F = 0x8eb44a8768581511;
	G = 0xdb0c2e0d64f98fa7;
	H = 0x47b5481dbefa4fa4;
	return ;
}

/*
**    DESCRIPTION
**         Updates the context chunk & the pointer of where we
**         are in the message ; also keeps track of the total
**         length of the message.
*/

ssize_t				sha384_update(t_sha384ctx *ctx, void **data, int flag)
{
	static bool		bit_added;
	ssize_t			ret;

	ft_bzero(ctx->chunk, 128);
	if (flag & O_FD)
		ret = read(*((int *)(*data)), ctx->chunk, 128);
	if (flag & O_BUF)
	{
		ret = ft_strnlen(ft_strncpy(ctx->chunk, (char *)(*data), 128), 128);
		*((char **)data) += ret;
	}
	ctx->bitlen = (ctx->bitlen + (ret * 8));
	if (0 <= ret && ret < 128 && bit_added == false)
	{
		ctx->chunk[ret] = (char)(1 << 7);
		bit_added = true;
	}
	if (0 <= ret && ret < 112)
	{
		ctx->bitlen = *(__uint128_t *)ft_to_big_endian(&ctx->bitlen, 16);
		*(__uint128_t *)&ctx->chunk[112] = ctx->bitlen;
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

void				sha384_transform(t_sha384ctx *ctx)
{
	t_sha384ctx		ctx_prime;
	uint64_t		tmp1;
	uint64_t		tmp2;
	int8_t			i;

	sha384_schedule(ctx);
	sha384_transform_init(ctx, &ctx_prime);
	i = -1;
	while (++i < SHA384_TOTAL_ROUNDS)
	{
		tmp1 = ((H1 + SHA2_384_SUM1(E1) + CH(E1, F1, G1) + g_sha384_k[i]
				+ ctx->schedule[i])
				% UINT64_MAX);
		tmp2 = ((SHA2_384_SUM0(A1) + MAJ(A1, B1, C1)) % UINT64_MAX);
		H1 = G1;
		G1 = F1;
		F1 = E1;
		E1 = ((D1 + tmp1) % UINT64_MAX);
		D1 = C1;
		C1 = B1;
		B1 = A1;
		A1 = ((tmp1 + tmp2) % UINT64_MAX);
	}
	sha384_transform_final(ctx, &ctx_prime);
	return ;
}

/*
**    DESCRIPTION
**         Appends the 64 bit words to each other (denoted as A, B, C, D,
**         E, F, G & H) to construct the final digest.
*/

void				sha384_final(t_sha384ctx *ctx, char **digest)
{
	if (!((*digest) = (char *)ft_malloc(SHA384_DIGEST_LENGTH + 1, '\0')))
		EXIT(ft_printf("Error: %s{underlined}", strerror(errno)));
	*(uint64_t *)&(*digest)[0] = *(uint64_t *)ft_to_big_endian(&A, 8);
	*(uint64_t *)&(*digest)[8] = *(uint64_t *)ft_to_big_endian(&B, 8);
	*(uint64_t *)&(*digest)[16] = *(uint64_t *)ft_to_big_endian(&C, 8);
	*(uint64_t *)&(*digest)[24] = *(uint64_t *)ft_to_big_endian(&D, 8);
	*(uint64_t *)&(*digest)[32] = *(uint64_t *)ft_to_big_endian(&E, 8);
	*(uint64_t *)&(*digest)[40] = *(uint64_t *)ft_to_big_endian(&F, 8);
	(*digest)[48] = '\0';
	return ;
}
