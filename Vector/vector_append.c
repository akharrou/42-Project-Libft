/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:53:27 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 15:52:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_append -- append an element to a vector
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
**         Description.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int		vector_append(struct s_vector *self, void *data)
{
	int ret;

	ret = 1;
	if (self->isfull(self))
		ret = self->resize(self, self->capacity * VECTOR_SIZE_MULTIPLIER);
	if (ret)
	{
		if (self->vector[self->load] != NULL)
			self->free(self->vector[self->load]);
		self->vector[self->load] = data;
		self->load += 1;
	}
	return (ret);
}
