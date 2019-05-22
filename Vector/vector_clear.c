/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:16:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 18:04:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_clear -- clear all elements of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_clear(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Iterates over and frees every element of the vector pointing
**         the pointers to NULL as its doing it.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int			vector_clear(struct s_vector *self)
{
	size_t	i;

	i = 0;
	while (i < self->capacity)
	{
		if (self->vector[i] != NULL)
			self->free(self->vector[i]);
		++i;
	}
	self->load = 0;
	return (1);
}
