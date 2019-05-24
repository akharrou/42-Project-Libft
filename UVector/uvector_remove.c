/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:13:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:14:13 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_remove -- remove the element at index 'i' in a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_remove(struct s_uvector *self, size_t i);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         size_t i                  The index at which to find the
**                                   element to remove.
**
**    DESCRIPTION
**         Finds & frees and element in the uvector and sets the pointer
**         at that index to point to NULL.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_remove(struct s_uvector *self, size_t i)
{
	if (i < self->capacity)
	{
		if (self->uvector[i] != NULL)
		{
			self->free(self->uvector[i]);
			self->uvector[i] = NULL;
			self->length -= 1;
			return (1);
		}
	}
	return (0);
}
