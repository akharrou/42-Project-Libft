/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha384.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:36:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:42:13 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHA384_H
# define FT_SHA384_H

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

# define SHA384_DIGEST_LENGTH   (48)
# define SHA384_CHUNK_LENGTH    (128)
# define SHA384_TOTAL_ROUNDS    (80)

# define SHA2_384_SUM0(a) (ROTR_64B(a, 28) ^ ROTR_64B(a, 34) ^ ROTR_64B(a, 39))
# define SHA2_384_SUM1(e) (ROTR_64B(e, 14) ^ ROTR_64B(e, 18) ^ ROTR_64B(e, 41))

# define SHA2_384_SIG0(w) (ROTR_64B(w, 1) ^ ROTR_64B(w, 8) ^ (w >> 7))
# define SHA2_384_SIG1(w) (ROTR_64B(w, 19) ^ ROTR_64B(w, 61) ^ (w >> 6))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Structure(s).
*/

typedef struct	s_sha384_context
{
	__uint128_t	bitlen;
	char		chunk[128];
	uint64_t	schedule[80];
	uint64_t	state[8];
}				t_sha384ctx;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Global(s).
*/

extern const uint64_t g_sha384_k[80];

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Main Function(s).
*/

char			*ft_sha384(void *data, int flag);

void			sha384_init(t_sha384ctx *ctx);
ssize_t			sha384_update(t_sha384ctx *ctx, void **data, int flag);
void			sha384_transform(t_sha384ctx *ctx);
void			sha384_final(t_sha384ctx *ctx, char **digest);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Utility Function(s).
*/

void			sha384_transform_init(t_sha384ctx *ctx, t_sha384ctx *ctx_prime);
void			sha384_schedule(t_sha384ctx *ctx);
void			sha384_transform_final(t_sha384ctx *ctx,
					t_sha384ctx *ctx_prime);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
