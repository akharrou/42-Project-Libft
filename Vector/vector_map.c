/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 19:23:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/06 03:28:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_map -- instantiate a vector from the mapping of an iterable
**                       (i.e array of any type)
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         vector_map(void *iterable, size_t length, size_t width,
**             void *(*function)(void *));
**
**    PARAMETERS
**
**         void *iterable                    Array (of any type).
**
**         size_t length                     Number of elements in the array.
**
**         size_t width                      Size of each element of the array.
**
**         void *(*function)(void *)         Mapping function, takes an element
**                                           of 'iterable' and produces another.
**
**                                           This newly produced element is
**                                           then stored in the vector.
**
**    DESCRIPTION
**         Creates a vector out of the mapping of 'iterable'.
**
**    RETURN VALUES
**         Returns the newly created vector.
**
**         If an error occurs, the newly created vector is returned with its
**         '.vector' field pointing to NULL.
*/

#include "../Includes/vector.h"

t_vector	vector_map(void *iterable, size_t length, size_t width,
				void *(*function)(void *))
{
	size_t		i;
	t_vector	instance;

	instance = vector.constructor(length, NULL);
	if (!instance.vector)
		return (instance);
	i = 0;
	while (i < instance.length)
	{
		instance.vector[i] = function(iterable + (i * width));
		++i;
	}
	return (instance);
}

/*
**    DESCRIPTION
**         Same as 'vector_map' but the iterable used the the array
**         of a vector instance. Also the mapping function accepts
**         additional arguments as a 'va_list'
*/

t_vector	vector_selfmap(struct s_vector *self,
				void *(*function)(void *, va_list ap), ...)
{
	t_vector	instance;
	va_list		tmp_ap;
	va_list		ap;
	size_t		i;

	instance = vector.constructor(self->length, NULL);
	if (!self->vector || !instance.vector)
		return (instance);
	va_start(ap, function);
	i = 0;
	while (i < self->length)
	{
		va_copy(tmp_ap, ap);
		instance.vector[i] = function(self->vector[i], tmp_ap);
		++i;
	}
	va_end(ap);
	return (instance);
}

/*
**    DESCRIPTION
**         Same but 'vector_self_map_new' but the vector itself gets
**         re-assigned all the mapped elements; i.e it is changed in
**         placed. No new vector is returned.
*/

void		vector_remap(struct s_vector *self,
				void *(*function)(void *, va_list ap), ...)
{
	va_list	tmp_ap;
	va_list	ap;
	void	*tmp;
	size_t	i;

	if (!self->vector)
		return ;
	va_start(ap, function);
	i = 0;
	while (i < self->length)
	{
		va_copy(tmp_ap, ap);
		tmp = function(self->vector[i], tmp_ap);
		self->free(self->vector[i]);
		self->vector[i] = tmp;
		++i;
	}
	va_end(ap);
	return ;
}
