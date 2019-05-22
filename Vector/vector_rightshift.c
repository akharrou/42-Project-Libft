/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_rightshift.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:04:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 11:50:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_rightshift -- right shift all elements of a vector by 'n'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_rightshift(struct s_vector instance, size_t n);
**
**    PARAMETERS
**
**         struct s_vector instance    A vector instance.
**
**         size_t n                    Number of positions to right shift
**                                     each element.
**
**    DESCRIPTION
**         Moves each element of the vector to the right by 'n' indexes.
**
**    RETURN VALUES
**         Returns the vector rightshifted.
*/

#include "../Includes/vector.h"

struct s_vector		vector_rightshift(struct s_vector instance, size_t n)
{
	size_t			i;
	size_t			j;

	if (n > instance.capacity)
		n = instance.capacity;
	i = instance.capacity - 1;
	j = 0;
	while (j < n)
	{
		if (instance.vector[i - j] != NULL)
			instance.free(instance.vector[i - j]);
		++j;
	}
	while (i - (n - 1) > 0)
	{
		instance.vector[i] = instance.vector[i - n];
		--i;
	}
	j = 0;
	while (j <= i)
	{
		instance.vector[j] = NULL;
		++j;
	}
	return (instance);
}
