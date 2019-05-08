/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 18:58:00 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/07 10:57:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"
#include "../Includes/macros_42.h"
#include "../Includes/bigint.h"

#define BIAS           1023
#define MANT_SIZE      52
#define TOTAL_SIZE     64
#define MAX_EXPONENT   (2047 - BIAS - MANT_SIZE)
#define MANTISSA_MASK  4503599627370495U
#define IMPLICIT_BIT   (1L << MANT_SIZE)
#define EMPTY          IMPLICIT_BIT

#define ZERO   (num.exponent == -BIAS - MANT_SIZE && num.mantissa == EMPTY)
#define INF    (num.exponent == MAX_EXPONENT && num.mantissa == EMPTY)
#define NAN_   (num.exponent == MAX_EXPONENT && num.mantissa != EMPTY)

char			*ft_dtoa_base(double n, char *base, int width, int precision)
{
	t_double	num;
	char		*res;

	num.sign = *(uintmax_t *)&n >> (TOTAL_SIZE - 1);
	num.exponent = (short)((*(uintmax_t *)&n << 1 >> 53) - BIAS - MANT_SIZE);
	num.mantissa = (*(uintmax_t *)&n & MANTISSA_MASK) | IMPLICIT_BIT;
	if (ZERO)
		res = ft_strdup("0");
	else if (INF)
		return ((num.sign) ? ft_strdup("-inf") : ft_strdup("inf"));
	else if (NAN_)
		return (ft_strdup("nan"));
	else
	{
		res = ft_utoa_base(num.mantissa, DECIMAL_BASE, 0);
		if (num.exponent > 0)
			while (num.exponent-- > 0)
				res = bigint_mulfre(res, 2, base, 1);
		else
			while (num.exponent++ < 0)
				res = bigint_divfre(res, 2, base, 1);
	}
	res = bigint_roundfre(res, base, ((precision >= 0) ? precision : 6), 1);
	res = ft_strprepend(res, ft_padding(width - ft_strlen(res), '0'), 1, 1);
	return ((num.sign) ? ft_strprepend(res, "-", 1, 0) : res);
}
