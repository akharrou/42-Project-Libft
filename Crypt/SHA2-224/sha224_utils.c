/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha224_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:33:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 09:50:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sha224.h"

/*
**    DESCRIPTION
**         Initialization of the auxilary context.
*/

void	sha224_transform_init(t_sha224ctx *ctx, t_sha224ctx *ctx_prime)
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
**         Obtaining the 64-entry message schedule array w[0..63]
**         of 32-bit words
*/

void	sha224_schedule(t_sha224ctx *ctx)
{
	uint32_t	i;

	i = 0;
	while (i < 16)
	{
		ctx->schedule[i] = *(uint32_t *)&ctx->chunk[i * 4];
		ctx->schedule[i] = *(uint32_t *)ft_to_big_endian(&ctx->schedule[i], 4);
		++i;
	}
	while (i < SHA224_TOTAL_ROUNDS)
	{
		ctx->schedule[i] = ((ctx->schedule[i - 16]
							+
							SHA2_224_SIG0(ctx->schedule[i - 15])
							+
							ctx->schedule[i - 7]
							+
							SHA2_224_SIG1(ctx->schedule[i - 2]))
							%
							UINT32_MAX);
		++i;
	}
	return ;
}

/*
**    DESCRIPTION
**         Updating the context to the transformed context.
*/

void	sha224_transform_final(t_sha224ctx *ctx, t_sha224ctx *ctx_prime)
{
	A = ((A + ctx_prime->state[0]) % UINT32_MAX);
	B = ((B + ctx_prime->state[1]) % UINT32_MAX);
	C = ((C + ctx_prime->state[2]) % UINT32_MAX);
	D = ((D + ctx_prime->state[3]) % UINT32_MAX);
	E = ((E + ctx_prime->state[4]) % UINT32_MAX);
	F = ((F + ctx_prime->state[5]) % UINT32_MAX);
	G = ((G + ctx_prime->state[6]) % UINT32_MAX);
	H = ((H + ctx_prime->state[7]) % UINT32_MAX);
}
