/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_constructor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:45:42 by akharrou         ###   ########.fr       */
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
**         If successful returns 1; otherwise 0.
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
		.prepend = &vector_prepend,
		.insert = &vector_insert,
		.extend = &vector_extend,
		.extendleft = &vector_extendleft,
		.pop = &vector_pop,
		.popleft = &vector_popleft,
		.deque = &vector_deque,
		.clear = &vector_clear,
		.remove = &vector_remove,
		.free = vector_free,
		.isempty = &vector_isempty, .isfull = &vector_isfull };
	instance.vector = (void **)malloc(sizeof(void *) * (capacity + 1));
	if (instance.vector != NULL)
	{
		instance.capacity = capacity;
		ft_bnull(instance.vector, instance.capacity + 1);
	}
	return (instance);
}

/*
**  Definition of the Vector Class.
*/

const struct s_vector_class vector =
{
	.constructor = &vector_constructor,
	.duplicate = &vector_duplicate,
	.reverse = &vector_reverse,
	.resize = &vector_resize,
	.rightshift = &vector_rightshift,
	.leftshift = &vector_leftshift
};
