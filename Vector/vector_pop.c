/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:27:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 17:30:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_pop -- pop an element from the end of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         vector_pop(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Pops off the (current) last element of the vector and
**         returns it.
**
**         The index at which the element was is made to point to
**         NULL.
**
**    RETURN VALUES
**         If successful returns the popped element; otherwise NULL.
*/

#include "../Includes/vector.h"

void		*vector_pop(struct s_vector *self)
{
	void	*tmp;

	tmp = NULL;
	if (self->load > 0)
	{
		tmp = self->vector[self->load];
		if (self->vector[self->load] != NULL)
			self->free(self->vector[self->load]);
	}
	return (tmp);
}
