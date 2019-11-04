/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 23:26:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/02 22:27:40 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"
#include "../Includes/math_42.h"

#include "../Includes/bigint.h"

t_bigint		bigint_adder(t_bigint lhs, t_bigint rhs, char *base)
{
	t_bigint	result;
	int8_t		intbase;
	uintmax_t	carry;
	uintmax_t	sum;
	int32_t		i;

	result = ft_strdup(lhs);
	intbase = ft_strlen(base);
	i = ft_strlen(result);
	carry = 0;
	while (--i >= 0)
	{
		if (result[i] == '.')
			--i;
		sum = carry + INT(lhs[i], base) + INT(rhs[i], base);
		result[i] = base[sum % intbase];
		carry = sum >= (uintmax_t)intbase;
	}
	if (carry)
		result = ft_strprepend(result, "1", 1, 0);
	result = bigint_cleaner(result);
	return (result);
}

t_bigint		bigint_add(t_bigint lhs, t_bigint rhs, char *base)
{
	t_bigint	lhs_copy;
	t_bigint	rhs_copy;
	t_bigint	result;

	lhs_copy = ft_strdup(lhs);
	rhs_copy = ft_strdup(rhs);
	if (!lhs_copy || !rhs_copy)
		return (NULL);
	result = arithmetic_dispatcher('+', &lhs_copy, &rhs_copy, base);
	free(lhs_copy);
	free(rhs_copy);
	return (result);
}

/*
**    DESCRIPTION
**         Wrapper function that allows to clean up & free certain variables
**         after function execution.
**
**    PARAMETERS
**
**         int free_op         Integer who's first 2 bits are used as
**                             booleans.
**
**                             If the first bit is on, then the first
**                             parameter is free'd.
**
**                             If the second bit is on, then the second
**                             parameter is free'd.
**
**    FREE'D PARAMETERS
**
**         - t_bigint lhs
**         - t_bigint rhs
*/

t_bigint		bigint_addfre(t_bigint lhs, t_bigint rhs,
					char *base, int free_op)
{
	t_bigint	res;

	res = bigint_add(lhs, rhs, base);
	if (free_op & 1 && lhs)
		free(lhs);
	if (free_op & 2 && rhs)
		free(rhs);
	return (res);
}
