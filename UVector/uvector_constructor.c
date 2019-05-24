/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_constructor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 10:26:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_constructor -- instantiate a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_uvector
**         uvector_constructor(size_t capacity);
**
**    PARAMETERS
**
**         size_t capacity           Starting capacity of
**                                   the uvector instance.
**
**    DESCRIPTION
**         Creates an instance of a uvector object.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/uvector.h"

t_uvector		uvector_constructor(size_t capacity, void (*uvector_free)(void *))
{
	t_uvector	instance;

	instance = (struct s_uvector) {
		.uvector = NULL, .length = 0, .capacity = 0,
		.push = &uvector_push,
		.enque = &uvector_enque,
		.append = &uvector_append,
		.appendleft = &uvector_appendleft,
		.insert = &uvector_insert,
		.extend = &uvector_extend,
		.extendleft = &uvector_extendleft,
		.pop = &uvector_pop,
		.popleft = &uvector_popleft,
		.deque = &uvector_deque,
		.clear = &uvector_clear,
		.remove = &uvector_remove,
		.free = uvector_free,
		.isempty = &uvector_isempty, .isfull = &uvector_isfull };
	instance.uvector = (void **)malloc(sizeof(void *) * (capacity + 1));
	if (instance.uvector != NULL)
	{
		instance.capacity = capacity;
		ft_bzero(instance.uvector, (instance.capacity + 1) * sizeof(void *));
	}
	return (instance);
}

/*
**  Definition of the uvector Class.
*/

const struct s_uvector_class uvector =
{
	.constructor = &uvector_constructor,
	.copy = &uvector_copy,
	.reverse = &uvector_reverse,
	.resize = &uvector_resize,
	.rightshift = &uvector_rightshift,
	.leftshift = &uvector_leftshift
};
