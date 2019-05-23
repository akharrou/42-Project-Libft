/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha256.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:36:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:42:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHA256_H
# define FT_SHA256_H

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

# define SHA256_DIGEST_LENGTH   (32)
# define SHA256_CHUNK_LENGTH    (64)
# define SHA256_TOTAL_ROUNDS    (64)

# define SHA2_256_SUM0(a) (ROTR_32B(a, 2) ^ ROTR_32B(a, 13) ^ ROTR_32B(a, 22))
# define SHA2_256_SUM1(e) (ROTR_32B(e, 6) ^ ROTR_32B(e, 11) ^ ROTR_32B(e, 25))

# define SHA2_256_SIG0(w) (ROTR_32B(w, 7) ^ ROTR_32B(w, 18) ^ (w >> 3))
# define SHA2_256_SIG1(w) (ROTR_32B(w, 17) ^ ROTR_32B(w, 19) ^ (w >> 10))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Structure(s).
*/

typedef struct	s_sha256_context
{
	uint64_t	bitlen;
	char		chunk[64];
	uint32_t	schedule[64];
	uint32_t	state[8];
}				t_sha256ctx;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Global(s).
*/

extern const uint32_t g_sha256_k[64];

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Main Function(s).
*/

char			*ft_sha256(void *data, int flag);

void			sha256_init(t_sha256ctx *ctx);
ssize_t			sha256_update(t_sha256ctx *ctx, void **data, int flag);
void			sha256_transform(t_sha256ctx *ctx);
void			sha256_final(t_sha256ctx *ctx, char **digest);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Utility Function(s).
*/

void			sha256_transform_init(t_sha256ctx *ctx, t_sha256ctx *ctx_prime);
void			sha256_schedule(t_sha256ctx *ctx);
void			sha256_transform_final(t_sha256ctx *ctx,
					t_sha256ctx *ctx_prime);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
