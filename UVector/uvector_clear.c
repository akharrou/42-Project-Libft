/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:16:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:08:33 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_clear -- clear all elements of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_clear(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Iterates over and frees every element of the vector and
**         each index of the vector is set to NULL.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int			uvector_clear(struct s_vector *self)
{
	size_t	i;

	i = 0;
	while (i < self->capacity)
	{
		if (self->vector[i] != NULL)
			self->free(self->vector[i]);
		self->vector[i] = NULL;
		++i;
	}
	self->length = 0;
	return (1);
}
