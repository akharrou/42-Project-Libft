/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 21:28:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 23:31:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sum -- sum a sequence of numbers.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_sum(int *vector, unsigned int size);
**
**    PARAMETERS
**
**         int *vector        Vector of numbers (of type int)
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

int		ft_sum(int *vector, unsigned int size)
{
	unsigned int	i;
	int				sum;

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
