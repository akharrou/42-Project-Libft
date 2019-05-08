/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 18:38:49 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/18 23:24:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sqrt -- square root function.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         double
**         ft_sqrt(double x);
**
**    PARAMETERS
**
**         double x        A number of type double.
**
**    DESCRIPTION
**         The ft_sqrt() function computes the non-negative square root of x.
**
**    RETURN VALUES
**         Returns square root of x.
**
**         If 'x' is smaller than 0, returns 0, if 'x' is 0 or 1, 'x' is
**         returned.
*/

double		ft_sqrt(double x)
{
	long double		res;
	long double		root;
	double			precision;

	if (x < 2)
		return ((x < 0) ? 0.0 : x);
	res = 0;
	root = 2;
	while ((res = root * root) <= x)
	{
		if (res == x)
			return (root);
		root++;
	}
	--root;
	precision = 0.000001;
	while ((res = root * root) <= x)
	{
		if (res == x)
			return (root);
		root += precision;
	}
	return (root - precision);
}
