/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:55:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:18:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_insert -- insert an element in a vector at index 'i'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_insert(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         size_t i                  Index in the vector at which to
**                                   insert the data.
**
**         void *data                Pointer to some data.
**
**    DESCRIPTION
**         If possible inserts 'data' in the vector at index 'i'.
**
**         If some element exists at that index, then the element is
**         first free'd and then 'data' is inserted in its place.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

int		vector_insert(struct s_vector *self, size_t i, void *data)
{
	if (i < self->capacity)
	{
		if (self->vector[i] != NULL)
			self->free(self->vector[i]);
		self->vector[i] = data;
		self->length += 1;
		return (1);
	}
	return (0);
}
