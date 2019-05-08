/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:19:16 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:32:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_max_d -- get the maximum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         double
**         ft_max_d(double *vector, unsigned int size);
**
**    PARAMETERS
**
**         double *vector          Vector containing numbers (of type double).
**
**         unsigned int size       Size of the vector.
**
**    DESCRIPTION
**         Iterates through the vector finds the maximum value of the vector
**         and returns it.
**
**    RETURN VALUES
**         Returns the maximum value found in the vector.
*/

double		ft_max_d(double *vector, unsigned int size)
{
	unsigned int	i;
	double			max;

	if (vector && size > 0)
	{
		max = vector[0];
		i = 0;
		while (size > ++i)
			max = (vector[i] > max) ? vector[i] : max;
		return (max);
	}
	return (0);
}
