/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 21:46:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 23:31:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sum_l -- sum a sequence of numbers.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         long
**         ft_sum_l(long *vector, unsigned int size);
**
**    PARAMETERS
**
**         long *vector       Vector of numbers (of type long)
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

long		ft_sum_l(long *vector, unsigned int size)
{
	long			sum;
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
