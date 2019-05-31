/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 19:23:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/30 19:40:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         func_name -- brief
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         func_name(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         void *data                Pointer to some data.
**
**         PARAM 3          Brief
**
**    DESCRIPTION
**         Description.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/vector.h"

t_vector	vector_map(void *iterable, size_t length, size_t width,
				void (*function)(void *))
{
	t_vector	instance;
	size_t		i;

	instance = vector.constructor(length, NULL);
	i = 0;
	while (i < length)
}
