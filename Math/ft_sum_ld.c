/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_ld.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:26:58 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 23:31:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sum_ld -- sum a sequence of numbers.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_sum_ld(long double *vector, unsigned int size);
**
**    PARAMETERS
**
**         long double *vector    Vector of numbers (of type long double)
**                                that are to be summed.
**
**         unsigned int           Size of the vector.
**
**    DESCRIPTION
**         Iterates through the vector summing up the numbers contained in it
**         along the way.
**
**    RETURN VALUES
**         Returns the sum of all the numbers in the vector.
*/

long double		ft_sum_ld(long double *vector, unsigned int size)
{
	long double		sum;
	unsigned int	i;

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
