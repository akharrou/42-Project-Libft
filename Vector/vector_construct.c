/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_construct.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:46:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 14:40:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_construct -- instantiate a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         vector_construct(size_t capacity);
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
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

t_vector		vector_construct(size_t capacity, int (*vector_free)(void *))
{
	t_vector	instance;

	instance = (struct s_vector) {
		.vector = (void **)malloc(sizeof(void *) * (capacity + 1)),
		.capacity = (instance.vector == NULL) ? 0 : capacity,
		.load = 0,
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
		.resize = &vector_resize,
		.isempty = &vector_isempty,
		.isfull = &vector_isfull };
	if (instance.vector != NULL)
		ft_bnull(instance.vector, instance.capacity + 1);
	return (instance);
}

const struct s_vector_class vector = {
	.construct = &vector_construct,
	.reverse = &vector_reverse
};
