/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_filter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:40:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 18:03:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_filter -- instansiate a vector out of select elements of an
**                          iterable
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_filter(void *iterable, size_t length, size_t width)
**             void *(*filter)(void *));
**
**    PARAMETERS
**
**         void *iterable            Array (of any type).
**
**         size_t length             Length of 'iterable'
**
**         size_t width              Individual size (in bytes) of
**                                   the elements in 'iterable'.
**
**         int (*filter)(void *)     Filter function that returns 1
**                                   if the element passed to it is
**                                   to be kept; otherwise 0.
**
**    DESCRIPTION
**         Instantiates a vector, initializing it with selected data elements
**         from 'iterable'.
**
**         The elements are selected based on the 'filter' function.
**
**    RETURN VALUES
**         If successful returns the newly created vector filled with selected
**         elements of 'iterable'.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_filter(void *iterable, size_t length, size_t width,
						int (*filter)(void *))
{
	t_vector		instance;
	size_t			i;
	size_t			j;

	instance = vector.constructor(length, NULL);
	i = 0;
	j = 0;
	while (j < length)
	{
		if (filter(iterable + (i * width)) == 1)
		{
			instance.vector[j] = ft_memdup(iterable + (i * width), width);
			++j;
		}
		++i;
	}
	return (instance);
}
