/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 09:48:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 10:56:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"
#include "../Includes/macros_42.h"
#include "../Includes/bigint.h"

#define BIAS          16383
#define MANT_SIZE     63
#define _15BITS       32767
#define MAX_EXPONENT  (32767 - BIAS - MANT_SIZE)
#define EMPTY         9223372036854775808u

#define INF           (num.exponent == MAX_EXPONENT && num.mantissa == EMPTY)
#define NAN_          (num.exponent == MAX_EXPONENT && num.mantissa != EMPTY)

char	*ft_ldtoa_base(long double n, char *base, int width, int precision)
{
	t_long_double	num;
	t_bigint		res;

	num.ldbl_.val = n;
	num.sign = num.ldbl_.body[9] >> 7 != 0;
	num.exponent = (*(short *)&num.ldbl_.body[8] & _15BITS) - BIAS - MANT_SIZE;
	num.mantissa = *(intmax_t *)num.ldbl_.body;
	if (INF)
		return ((num.sign) ? ft_strdup("-inf") : ft_strdup("inf"));
	if (NAN_)
		return (ft_strdup("nan"));
	res = ft_utoa_base(num.mantissa, DECIMAL_BASE, 0);
	if (num.exponent > 0)
		while (num.exponent-- > 0)
			res = bigint_mulfre(res, 2, base, 1);
	else
		while (num.exponent++ < 0)
			res = bigint_divfre(res, 2, base, 1);
	precision = (precision >= 0) ? precision : 6;
	res = bigint_roundfre(res, base, precision, 1);
	res = ft_strprepend(res, ft_padding(width - ft_strlen(res), '0'), 1, 1);
	return ((num.sign) ? ft_strprepend(res, "-", 1, 0) : res);
}
