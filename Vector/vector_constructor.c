/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_constructor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/01 15:24:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_constructor -- instantiate a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         vector_constructor(size_t capacity);
**
**    PARAMETERS
**
**         size_t capacity                Starting capacity of
**                                        the vector instance.
**
**         void (*custom_free)(void *)    Function pointer that
**                                        points to a function
**                                        that will free a vector
**                                        element.
**
**    DESCRIPTION
**         Creates an instance of a vector object.
**
**    RETURN VALUES
**         Returns the constructed instance.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

t_vector		vector_constructor(size_t capacity, void (*custom_free)(void *))
{
	t_vector	instance;

	instance = (struct s_vector) {
		.vector = NULL, .length = 0, .capacity = 0,
		.insert = &vector_insert,
		.push = &vector_push, .enque = &vector_enque, .map = &vector_selfmap,
		.append = &vector_append, .appendleft = &vector_appendleft,
		.extend = &vector_extend, .extendleft = &vector_extendleft,
		.get = &vector_get, .getby_ref = &vector_getby_ref,
		.search = &vector_search, .find = &vector_find, .remap = &vector_remap,
		.pop = &vector_pop, .popleft = &vector_popleft, .deque = &vector_deque,
		.free = &vector_free, .remove = &vector_remove, .clear = &vector_clear,
		.isempty = &vector_isempty, .isfull = &vector_isfull,
		.isvoid = &vector_isvoid, .iter = &vector_iter, .viter = &vector_viter,
	};
	if (custom_free != NULL)
		instance.free = custom_free;
	if (capacity > 0)
		instance.vector = (void **)malloc(sizeof(void *) * (capacity + 1));
	if (instance.vector != NULL)
	{
		instance.capacity = capacity;
		ft_bzero(instance.vector, (instance.capacity + 1) * sizeof(void *));
	}
	return (instance);
}

/*
**  Definition of the Vector Class.
*/

const struct s_vector_class vector =
{
	.constructor = &vector_constructor,
	\
	.instance = &vector_instance,
	.init = &vector_init,
	.empty = &vector_empty,
	// .from = &vector_from,
	// .filter = &vector_filter,
	.map = &vector_map,
	\
	.destructor = &vector_destructor,
	\
	.copy = &vector_copy,
	.reverse = &vector_reverse,
	.resize = &vector_resize,
	.rightshift = &vector_rightshift,
	.leftshift = &vector_leftshift
};
