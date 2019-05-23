/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_popleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:31:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 16:16:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_popleft -- pop an element from the front of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         vector_popleft(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Pops off the first element of the vector and returns it.
**
**         All elements that preceed the popped element are moved
**         backwards by one index.
**
**    RETURN VALUES
**         If successful returns the popped element; otherwise NULL.
*/

#include "../Includes/vector.h"

void	*vector_popleft(struct s_vector *self)
{
	void	*element;

	element = self->vector[0];
	self->vector[0] = NULL;
	self->length -= 1;
	(*self) = vector.leftshift(*self, 1);
	return (element);
}
