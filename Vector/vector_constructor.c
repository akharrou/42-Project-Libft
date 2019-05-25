/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_constructor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 17:59:41 by akharrou         ###   ########.fr       */
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
**         size_t capacity           Starting capacity of
**                                   the vector instance.
**
**    DESCRIPTION
**         Creates an instance of a vector object.
**
**    RETURN VALUES
**         Returns the constructed instance.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

t_vector		vector_constructor(size_t capacity, void (*vector_free)(void *))
{
	t_vector	instance;

	instance = (struct s_vector) {
		.vector = NULL, .length = 0, .capacity = 0,
		.push = &vector_push,
		.enque = &vector_enque,
		.append = &vector_append,
		.appendleft = &vector_appendleft,
		.insert = &vector_insert,
		.extend = &vector_extend,
		.extendleft = &vector_extendleft,
		.pop = &vector_pop,
		.popleft = &vector_popleft,
		.deque = &vector_deque,
		.clear = &vector_clear,
		.remove = &vector_remove, .free = vector_free,
		.get = &vector_get, .getby_ref = &vector_getby_ref,
		.isempty = &vector_isempty, .isfull = &vector_isfull };
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
	.destructor = &vector_destructor,
	.copy = &vector_copy,
	.reverse = &vector_reverse,
	.resize = &vector_resize,
	.rightshift = &vector_rightshift,
	.leftshift = &vector_leftshift
};
