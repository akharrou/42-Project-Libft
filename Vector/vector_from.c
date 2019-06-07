/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_from.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:40:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/07 02:27:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_from -- instansiate a vector out of the elements of an
**                        iterable
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_from(void *iterable, size_t length, size_t width);
**
**    PARAMETERS
**
**         void *iterable     Array (of any type).
**
**         size_t length      Length of 'iterable'
**
**         size_t width       Individual size (in bytes) of the elements
**                            in 'iterable'.
**
**    DESCRIPTION
**         Instantiates a vector, initializing it with the data elements
**         of 'iterable'.
**
**    RETURN VALUES
**         If successful returns the newly created vector filled with all
**         the elements of 'iterable'.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_from(void *iterable, size_t length, size_t width)
{
	t_vector		instance;
	size_t			i;

	instance = vector.constructor(length, NULL);
	i = 0;
	while (i < length)
	{
		instance.vector[i] = ft_memdup(iterable + (i * width), width);
		++i;
	}
	instance.length = length;
	return (instance);
}
