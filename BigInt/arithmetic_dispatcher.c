/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_dispatcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:14:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/02 21:32:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdint_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

#include "../Includes/bigint.h"

t_bigint	arithmetic_dispatcher(char operation, t_bigint *lhs,
				t_bigint *rhs, char *base)
{
	t_bigint	result;
	int8_t		sign;

	bigint_normalizer(lhs, rhs);
	if ((*rhs)[0] == '-')
		operation = (operation == '+') ? '-' : '+';
	sign = (operation == '+') ? 1 : -1;
	ft_swap_str(lhs, rhs);
	if ((*rhs)[0] == '-')
		operation = (operation == '+') ? '-' : '+';
	(*lhs) = ft_strlstrip((*lhs), "-");
	(*rhs) = ft_strlstrip((*rhs), "-");
	if (operation == '-' && bigint_compare(*lhs, *rhs) < 0)
	{
		sign = -sign;
		ft_swap_str(lhs, rhs);
	}
	result = (operation == '+') ?
		bigint_adder(*lhs, *rhs, base) :
		bigint_subtracter(*lhs, *rhs, base);
	if (sign == -1 && ft_strcmp(result, "0") != 0)
		result = ft_strprepend(result, "-", 1, 0);
	return (result);
}
