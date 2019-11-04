/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:08:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/02 22:04:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIGINT_H
# define BIGINT_H

# include <stdint.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Type.
*/

typedef char* t_bigint;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Main Function(s).
*/

t_bigint	bigint_add(t_bigint lhs, t_bigint rhs, t_bigint base);
t_bigint	bigint_sub(t_bigint lhs, t_bigint rhs, t_bigint base);
t_bigint	bigint_mul(t_bigint num, intmax_t multiplier, char *base);
t_bigint	bigint_div(t_bigint num, intmax_t divider, char *base);
t_bigint	bigint_pow(t_bigint num, intmax_t exponent, char *base);

int			bigint_compare(t_bigint lhs, t_bigint rhs);
t_bigint	bigint_max(t_bigint lhs, t_bigint rhs);
t_bigint	bigint_min(t_bigint lhs, t_bigint rhs);

t_bigint	bigint_round(t_bigint num, char *base, int precision);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Helper Function(s).
*/

t_bigint	arithmetic_dispatcher(char operation,
				t_bigint *lhs, t_bigint *rhs, char *base);
void		bigint_normalizer(t_bigint *op_1, t_bigint *op_2);
t_bigint	bigint_cleaner(t_bigint number);
t_bigint	bigint_adder(t_bigint lhs, t_bigint rhs, char *base);
t_bigint	bigint_subtracter(t_bigint lhs, t_bigint rhs,
			char *base);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Conveniant Function(s).
*/

t_bigint	bigint_addfre(t_bigint lhs, t_bigint rhs, char *base,
				int free_op);
t_bigint	bigint_subfre(t_bigint lhs, t_bigint rhs, char *base,
				int free_op);
t_bigint	bigint_mulfre(t_bigint num, intmax_t multiplier, char *base,
				int free_num);
t_bigint	bigint_divfre(t_bigint num, intmax_t divider, char *base,
				int free_num);
t_bigint	bigint_powfre(t_bigint num, intmax_t exponent, char *base,
				int free_num);
t_bigint	bigint_roundfre(t_bigint num, char *base, int precision,
				int free_num);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
