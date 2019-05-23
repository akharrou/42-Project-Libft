/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crypt.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 10:46:46 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 11:56:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRYPT_H
# define CRYPT_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Header File(s).
*/

# include "../Crypt/MD5/ft_md5.h"
# include "../Crypt/SHA2-224/ft_sha224.h"
# include "../Crypt/SHA2-256/ft_sha256.h"
# include "../Crypt/SHA2-384/ft_sha384.h"
# include "../Crypt/SHA2-512/ft_sha512.h"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Flags.
*/

# define O_FD   (1)
# define O_BUF  (2)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro(s).
*/

# ifdef E
#  undef E
# endif

# define A   (ctx->state[0])
# define B   (ctx->state[1])
# define C   (ctx->state[2])
# define D   (ctx->state[3])
# define E   (ctx->state[4])
# define F   (ctx->state[5])
# define G   (ctx->state[6])
# define H   (ctx->state[7])

# define A1  (ctx_prime.state[0])
# define B1  (ctx_prime.state[1])
# define C1  (ctx_prime.state[2])
# define D1  (ctx_prime.state[3])
# define E1  (ctx_prime.state[4])
# define F1  (ctx_prime.state[5])
# define G1  (ctx_prime.state[6])
# define H1  (ctx_prime.state[7])

# define CH(e, f, g)   ((e & f) ^ ((~e) & g))
# define MAJ(a, b, c)  ((a & b) ^ (a & c) ^ (b & c))

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Cryptographic Hash Function(s).
*/

char	*ft_md5(void *data, int flag);
char	*ft_sha224(void *data, int flag);
char	*ft_sha256(void *data, int flag);
char	*ft_sha384(void *data, int flag);
char	*ft_sha512(void *data, int flag);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Encryption Hash Function(s).
*/

/*
**  Coming soon...
*/

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
