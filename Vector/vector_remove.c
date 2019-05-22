/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:13:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:14:13 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_remove -- remove the element at index 'i' in a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_remove(struct s_vector *self, size_t i);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         size_t i                  The index at which to find the
**                                   element to remove.
**
**    DESCRIPTION
**         Finds & frees and element in the vector and sets the pointer
**         at that index to point to NULL.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int		vector_remove(struct s_vector *self, size_t i)
{
	if (i < self->capacity)
	{
		if (self->vector[i] != NULL)
		{
			self->free(self->vector[i]);
			self->vector[i] = NULL;
			self->length -= 1;
			return (1);
		}
	}
	return (0);
}
