/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:42:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:24:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_pow -- power function.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         double
**         ft_pow(double x, double y);
**
**    PARAMETERS
**
**         double x         Number, of type double, that is to be raised
**                          to the power of 'y'.
**
**         double y         Number, of type double, used to raise 'x'.
**
**    DESCRIPTION
**         The ft_pow() functions computes 'x' raised to the power 'y'.
**
**    RETURN VALUES
**         Returns 'x' raised to the power 'y'.
*/

double	ft_pow(double x, double y)
{
	double	val;
	double	sign;

	if (y == 0)
		return (1.0);
	sign = (x < 0) ? -1.0 : 1.0;
	x = (x < 0) ? (-x) : (x);
	val = x;
	if (y < 0)
	{
		y = -y;
		while (--y > -2)
			val /= x;
	}
	else
	{
		while (--y > 0)
			val *= x;
	}
	return (val * sign);
}
