/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_l.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:20:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:33:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_max_l -- get the maximum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         long
**         ft_max_l(long *vector, unsigned int size);
**
**    PARAMETERS
**
**         long *vector            Vector containing numbers (of type long).
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

long		ft_max_l(long *vector, unsigned int size)
{
	unsigned int	i;
	long			max;

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
