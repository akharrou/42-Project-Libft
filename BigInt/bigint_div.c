/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:57:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 12:26:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/macros_42.h"

#include "../Includes/bigint.h"

t_bigint		bigint_div(t_bigint num, int divider, char *base)
{
	int8_t		intbase;
	int32_t		carry;
	int32_t		sum;
	int32_t		i;

	num = ft_strdup(num);
	intbase = ft_strlen(base);
	carry = 0;
	i = 0;
	while (num[i] && num[i] != '.')
	{
		sum = carry + INT(num[i], base);
		num[i++] = base[sum / divider];
		carry = sum % divider * intbase;
	}
	num = (num[i] != '.' && carry) ? ft_strappend(num, ".", 1, 0) : num;
	i += (num[i] == '.');
	while (num[i] || carry)
	{
		num = (carry && num[i] == '\0') ? ft_strappend(num, "0", 1, 0) : num;
		sum = carry + INT(num[i], base);
		num[i++] = base[sum / divider];
		carry = sum % divider * intbase;
	}
	return (bigint_cleaner(num));
}

/*
**    DESCRIPTION
**         Wrapper function that allows to clean up & free certain variables
**         after function execution.
**
**    PARAMETERS
**
**         int free_num         Integer (boolean) to signal whether
**                                 or not to free the variable(s).
**
**    FREE'D PARAMETERS
**
**         - t_bigint num
*/

t_bigint		bigint_divfre(t_bigint num, int divider, char *base,
					int free_num)
{
	t_bigint	res;

	res = bigint_div(num, divider, base);
	if (free_num && num)
		free((void *)num);
	return (res);
}
