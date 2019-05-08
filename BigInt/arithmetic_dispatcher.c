/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arithmetic_dispatcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:14:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/05 20:51:41 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdint_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

#include "../Includes/bigint.h"

t_bigint	arithmetic_dispatcher(char operation, t_bigint *operand_1,
				t_bigint *operand_2, char *base)
{
	t_bigint	result;
	int8_t		sign;

	bigint_normalizer(operand_1, operand_2);
	if ((*operand_2)[0] == '-')
		operation = (operation == '+') ? '-' : '+';
	sign = (operation == '+') ? 1 : -1;
	ft_swap_str(operand_1, operand_2);
	if ((*operand_2)[0] == '-')
		operation = (operation == '+') ? '-' : '+';
	(*operand_1) = ft_strlstrip((*operand_1), "-");
	(*operand_2) = ft_strlstrip((*operand_2), "-");
	if (operation == '-' && bigint_compare(*operand_1, *operand_2) < 0)
	{
		sign = -sign;
		ft_swap_str(operand_1, operand_2);
	}
	result = (operation == '+') ?
		bigint_adder(*operand_1, *operand_2, base) :
		bigint_subtracter(*operand_1, *operand_2, base);
	if (sign == -1 && ft_strcmp(result, "0") != 0)
		result = ft_strprepend(result, "-", 1, 0);
	return (result);
}
