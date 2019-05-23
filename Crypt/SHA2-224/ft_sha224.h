/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha224.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:36:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:42:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHA224_H
# define FT_SHA224_H

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

# define SHA224_DIGEST_LENGTH   (28)
# define SHA224_CHUNK_LENGTH    (64)
# define SHA224_TOTAL_ROUNDS    (64)

# define SHA2_224_SUM0(a) (ROTR_32B(a, 2) ^ ROTR_32B(a, 13) ^ ROTR_32B(a, 22))
# define SHA2_224_SUM1(e) (ROTR_32B(e, 6) ^ ROTR_32B(e, 11) ^ ROTR_32B(e, 25))

# define SHA2_224_SIG0(w) (ROTR_32B(w, 7) ^ ROTR_32B(w, 18) ^ (w >> 3))
# define SHA2_224_SIG1(w) (ROTR_32B(w, 17) ^ ROTR_32B(w, 19) ^ (w >> 10))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Structure(s).
*/

typedef struct	s_sha224_context
{
	uint64_t	bitlen;
	char		chunk[64];
	uint32_t	schedule[64];
	uint32_t	state[8];
}				t_sha224ctx;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Global(s).
*/

extern const uint32_t g_sha224_k[64];

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Main Function(s).
*/

char			*ft_sha224(void *data, int flag);

void			sha224_init(t_sha224ctx *ctx);
ssize_t			sha224_update(t_sha224ctx *ctx, void **data, int flag);
void			sha224_transform(t_sha224ctx *ctx);
void			sha224_final(t_sha224ctx *ctx, char **digest);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Utility Function(s).
*/

void			sha224_transform_init(t_sha224ctx *ctx, t_sha224ctx *ctx_prime);
void			sha224_schedule(t_sha224ctx *ctx);
void			sha224_transform_final(t_sha224ctx *ctx,
					t_sha224ctx *ctx_prime);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
