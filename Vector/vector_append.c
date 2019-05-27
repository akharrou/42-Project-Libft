/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:53:27 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 11:55:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_append -- add an element to the back of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_append(struct s_vector *self, void *data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         void *data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to end of the vector.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int		vector_append(struct s_vector *self, void *data)
{
	if (self->isvoid(self) == 1)
		(*self) = vector.resize(*self, VECTOR_INIT_CAPACITY);
	if (self->isfull(self) == 1)
		(*self) = vector.resize(*self, self->capacity * VECTOR_SIZE_MULTIPLIER);
	if (self->isfull(self) == 0)
	{
		if (self->vector[self->length] != NULL)
			self->free(self->vector[self->length]);
		self->vector[self->length] = data;
		self->length += 1;
		return (1);
	}
	return (0);
}
