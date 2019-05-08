/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:22:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:33:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_min_d -- get the minimum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         double
**         ft_min_d(double *vector, unsigned int size);
**
**    PARAMETERS
**
**         double *vector          Vector containing numbers (of type double).
**
**         unsigned int size       Size of the vector.
**
**    DESCRIPTION
**         Iterates through the vector finds the minimum value of the vector
**         and returns it.
**
**    RETURN VALUES
**         Returns the minimum value found in the vector.
*/

double		ft_min_d(double *vector, unsigned int size)
{
	unsigned int	i;
	double			min;

	if (vector && size > 0)
	{
		min = vector[0];
		i = 0;
		while (size > ++i)
			min = (vector[i] < min) ? vector[i] : min;
		return (min);
	}
	return (0);
}
