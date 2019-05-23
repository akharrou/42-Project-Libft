/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha512_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:33:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 09:54:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sha512.h"

/*
**    DESCRIPTION
**         Initialization of the auxilary context.
*/

void	sha512_transform_init(t_sha512ctx *ctx, t_sha512ctx *ctx_prime)
{
	ctx_prime->state[0] = A;
	ctx_prime->state[1] = B;
	ctx_prime->state[2] = C;
	ctx_prime->state[3] = D;
	ctx_prime->state[4] = E;
	ctx_prime->state[5] = F;
	ctx_prime->state[6] = G;
	ctx_prime->state[7] = H;
}

/*
**    DESCRIPTION
**         Obtaining the 80-entry message schedule array w[0..79]
**         of 64-bit words
*/

void	sha512_schedule(t_sha512ctx *ctx)
{
	uint64_t	i;

	i = 0;
	while (i < 16)
	{
		ctx->schedule[i] = *(uint64_t *)&ctx->chunk[i * 8];
		ctx->schedule[i] = *(uint64_t *)ft_to_big_endian(&ctx->schedule[i], 8);
		++i;
	}
	while (i < SHA512_TOTAL_ROUNDS)
	{
		ctx->schedule[i] = ((ctx->schedule[i - 16]
							+
							SHA2_512_SIG0(ctx->schedule[i - 15])
							+
							ctx->schedule[i - 7]
							+
							SHA2_512_SIG1(ctx->schedule[i - 2]))
							%
							UINT64_MAX);
		++i;
	}
	return ;
}

/*
**    DESCRIPTION
**         Updating the context to the transformed context.
*/

void	sha512_transform_final(t_sha512ctx *ctx, t_sha512ctx *ctx_prime)
{
	A = ((A + ctx_prime->state[0]) % UINT64_MAX);
	B = ((B + ctx_prime->state[1]) % UINT64_MAX);
	C = ((C + ctx_prime->state[2]) % UINT64_MAX);
	D = ((D + ctx_prime->state[3]) % UINT64_MAX);
	E = ((E + ctx_prime->state[4]) % UINT64_MAX);
	F = ((F + ctx_prime->state[5]) % UINT64_MAX);
	G = ((G + ctx_prime->state[6]) % UINT64_MAX);
	H = ((H + ctx_prime->state[7]) % UINT64_MAX);
}
