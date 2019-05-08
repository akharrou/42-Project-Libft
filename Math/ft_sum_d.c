/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:26:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 23:31:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sum_d -- sum a sequence of numbers.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_sum_d(double *vector, unsigned int size);
**
**    PARAMETERS
**
**         double *vector     Vector of numbers (of type double)
**                            that are to be summed.
**
**         unsigned int       Size of the vector.
**
**    DESCRIPTION
**         Iterates through the vector summing up the numbers contained in it
**         along the way.
**
**    RETURN VALUES
**         Returns the sum of all the numbers in the vector.
*/

double		ft_sum_d(double *vector, unsigned int size)
{
	unsigned int	i;
	double			sum;

	sum = 0;
	if (vector && size > 0)
	{
		i = 0;
		while (size > i)
		{
			sum += vector[i];
			++i;
		}
	}
	return (sum);
}
