/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_constructor.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:35:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:35:06 by akharrou         ###   ########.fr       */
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
**         Returns the constructed instance.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/uvector.h"

t_uvector		uvector_constructor(size_t capacity)
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
		.get = &uvector_get,
		.setall = &uvector_setall,
		.isempty = &uvector_isempty, .isfull = &uvector_isfull
	};
	instance.uvector = (intmax_t *)malloc(sizeof(intmax_t) * capacity);
	if (instance.uvector != NULL)
	{
		instance.capacity = capacity;
		ft_bzero(instance.uvector, instance.capacity * sizeof(intmax_t));
	}
	return (instance);
}

/*
**  Definition of the Unboxed Vector Class.
*/

const struct s_uvector_class uvector =
{
	.constructor = &uvector_constructor,
	.destructor = &uvector_destructor,
	.copy = &uvector_copy,
	.reverse = &uvector_reverse,
	.resize = &uvector_resize,
	.rightshift = &uvector_rightshift,
	.leftshift = &uvector_leftshift
};
