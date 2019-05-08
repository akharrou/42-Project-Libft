/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:23:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/23 18:00:45 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_min_l -- get the minimum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_min_l(long *vector, unsigned int size);
**
**    PARAMETERS
**
**         long *vector            Vector containing numbers (of type long).
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

long		ft_min_l(long *vector, unsigned int size)
{
	unsigned int	i;
	long			min;

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
