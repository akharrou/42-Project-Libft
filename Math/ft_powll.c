/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 10:09:06 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/18 10:29:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_powll -- power function.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         unsigned long long
**         ft_powll(long x, int y);
**
**    PARAMETERS
**
**         long x         Number, of type long, that is to be raised
**                        to the power of 'y'.
**
**         int y          Number, of type double, used to raise 'x'.
**
**    DESCRIPTION
**         The ft_powll() functions computes 'x' raised to the power 'y'.
**
**    RETURN VALUES
**         Returns 'x' raised to the power 'y'.
*/

unsigned long long	ft_powll(long x, int y)
{
	unsigned long long	val;

	if (y == 0)
		return (1);
	val = x;
	while (--y > 0)
		val *= x;
	return (val);
}
