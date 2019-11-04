/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_pow.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:57:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/03 17:57:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"
#include "../Includes/bigint.h"

t_bigint	bigint_pow(t_bigint num, intmax_t exponent, char *base)
{
	num = ft_strdup(num);
	if (exponent > 0)
		while (exponent-- > 0)
			num = bigint_mulfre(num, exponent, base, 1);
	else
		while (exponent++ < 0)
			num = bigint_divfre(num, exponent, base, 1);
	return (num);
}

/*
**    DESCRIPTION
**         Wrapper function that allows to clean up & free certain variables
**         after function execution.
**
**    PARAMETERS
**
**         int free_num         Integer (boolean) to signal whether
**                              or not to free the variable(s).
**
**                              If set to 1, the variable shall be free'd.
**
**    FREE'D PARAMETERS
**
**         - t_bigint num
*/

t_bigint	bigint_powfre(t_bigint num, intmax_t exponent, char *base,
	int free_num)
{
	t_bigint	res;

	res = bigint_pow(num, exponent, base);
	if (free_num && num)
		free((void *)num);
	return (res);
}
