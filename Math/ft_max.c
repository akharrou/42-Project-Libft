/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:20:06 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:32:48 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_max -- get the maximum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_max(int *vector, unsigned int size);
**
**    PARAMETERS
**
**         int *vector             Vector containing numbers (of type int).
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

int		ft_max(int *vector, unsigned int size)
{
	unsigned int	i;
	int				max;

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
