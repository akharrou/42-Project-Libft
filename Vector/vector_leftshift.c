/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_leftshift.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:04:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 11:51:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_leftshift -- left shift all elements of a vector by 'n'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_leftshift(struct s_vector instance, size_t n);
**
**    PARAMETERS
**
**         struct s_vector instance    A vector instance.
**
**         size_t n                    Number of positions to left shift
**                                     each element.
**
**    DESCRIPTION
**         Moves each element of the vector to the left by 'n' indexes.
**
**    RETURN VALUES
**         Returns the vector leftshifted.
*/

#include "../Includes/vector.h"

struct s_vector		vector_leftshift(struct s_vector instance, size_t n)
{
	size_t	i;

	if (n > instance.capacity)
		n = instance.capacity;
	i = 0;
	while (i < n)
	{
		if (instance.vector[i] != NULL)
			instance.free(instance.vector[i]);
		++i;
	}
	i = 0;
	while ((i + n) < instance.capacity)
	{
		instance.vector[i] = instance.vector[i + n];
		++i;
	}
	while (i < instance.capacity)
	{
		instance.vector[i] = NULL;
		++i;
	}
	return (instance);
}
