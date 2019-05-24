/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:53:27 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 18:22:33 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_append -- add an element to the back of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_append(struct s_vector *self, t_data data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         t_data data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to end of the vector.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_append(struct s_vector *self, t_data data)
{
	if (self->isfull(self) == 1)
		(*self) = vector.resize(*self, self->capacity * uvector_SIZE_MULTIPLIER);
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
