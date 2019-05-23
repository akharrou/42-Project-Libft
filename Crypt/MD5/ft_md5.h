/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:16:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:49:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MD5_H
# define FT_MD5_H

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

# define MD5_DIGEST_LENGTH     (16)
# define MD5_CHUNK_LENGTH      (64)
# define MD5_TOTAL_OPERATIONS  (64)

# define MD5_ROUND_1     (0 <= i && i <= 15)
# define MD5_ROUND_2     (16 <= i && i <= 31)
# define MD5_ROUND_3     (32 <= i && i <= 47)
# define MD5_ROUND_4     (48 <= i && i <= 63)

# define MD5_M(g)        (*(uint32_t *)&ctx->chunk[g * 4])

# define MD5_F(b, c, d)  (((b) & (c)) | ((~b) & (d)))
# define MD5_G(b, c, d)  (((b) & (d)) | ((c) & (~d)))
# define MD5_H(b, c, d)  ((b) ^ (c) ^ (d))
# define MD5_I(b, c, d)  ((c) ^ ((b) | (~d)))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_md5_context
{
	uint64_t	bitlen;
	uint32_t	state[4];
	char		chunk[64];
}				t_md5ctx;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

extern uint32_t	g_md5_s[64];
extern uint32_t	g_md5_k[64];

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Main Functions.
*/

char			*ft_md5(void *data, int flag);

void			md5_init(t_md5ctx *ctx);
ssize_t			md5_update(t_md5ctx *ctx, void **data, int flag);
void			md5_transform(t_md5ctx *ctx);
void			md5_final(t_md5ctx *ctx, char **digest);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Utility Functions.
*/

void			md5_operation(t_md5ctx *ctx, uint32_t i, uint32_t *f,
					uint32_t *g);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
