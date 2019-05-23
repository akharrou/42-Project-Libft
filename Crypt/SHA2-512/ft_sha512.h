/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha512.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:36:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:43:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHA512_H
# define FT_SHA512_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Header File(s).
*/

# include "../../Includes/libft.h"
# include "../../Includes/crypt.h"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro(s).
*/

# define SHA512_DIGEST_LENGTH   (64)
# define SHA512_CHUNK_LENGTH    (128)
# define SHA512_TOTAL_ROUNDS    (80)

# define SHA2_512_SUM0(a) (ROTR_64B(a, 28) ^ ROTR_64B(a, 34) ^ ROTR_64B(a, 39))
# define SHA2_512_SUM1(e) (ROTR_64B(e, 14) ^ ROTR_64B(e, 18) ^ ROTR_64B(e, 41))

# define SHA2_512_SIG0(w) (ROTR_64B(w, 1) ^ ROTR_64B(w, 8) ^ (w >> 7))
# define SHA2_512_SIG1(w) (ROTR_64B(w, 19) ^ ROTR_64B(w, 61) ^ (w >> 6))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Structure(s).
*/

typedef struct	s_sha512_context
{
	__uint128_t	bitlen;
	char		chunk[128];
	uint64_t	schedule[80];
	uint64_t	state[8];
}				t_sha512ctx;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Global(s).
*/

extern const uint64_t g_sha512_k[80];

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Main Function(s).
*/

char			*ft_sha512(void *data, int flag);

void			sha512_init(t_sha512ctx *ctx);
ssize_t			sha512_update(t_sha512ctx *ctx, void **data, int flag);
void			sha512_transform(t_sha512ctx *ctx);
void			sha512_final(t_sha512ctx *ctx, char **digest);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Utility Function(s).
*/

void			sha512_transform_init(t_sha512ctx *ctx, t_sha512ctx *ctx_prime);
void			sha512_schedule(t_sha512ctx *ctx);
void			sha512_transform_final(t_sha512ctx *ctx,
					t_sha512ctx *ctx_prime);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
