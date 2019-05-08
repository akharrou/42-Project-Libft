/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 21:49:27 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/16 22:33:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_min -- get the minimum value of a vector.
**
**    SYNOPSIS
**         #include "math_42.h"
**
**         int
**         ft_min(int *vector, unsigned int size);
**
**    PARAMETERS
**
**         int *vector             Vector containing numbers (of type int).
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

int		ft_min(int *vector, unsigned int size)
{
	unsigned int	i;
	int				min;

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
