/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_generic.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 23:25:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 23:35:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sum_generic -- sum a sequence of numbers.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_sum_generic(void *vector, unsigned int size,
**                int (*add)(void *, void *));
**
**    PARAMETERS
**
**         void *vector                    Vector of objects.
**
**         unsigned int                    Size of the vector.
**
**         int (*add)(void *, void *)      Function that returns the result
**                                         of the addition of the two objects
**                                         passed.
**
**    DESCRIPTION
**         Iterates through the vector summing up the objects contained in it
**         along the way.
**
**    RETURN VALUES
**         Returns the sum of all the objects in the vector.
*/

int		ft_sum_generic(void *vector, unsigned int size,
			int (*add)(void *, void *))
{
	unsigned int	i;
	int				sum;

	sum = 0;
	if (vector && size > 0 && add)
	{
		i = 0;
		while (size > i)
		{
			sum = add((void *)&sum, (void *)&vector[i]);
			++i;
		}
	}
	return (sum);
}
