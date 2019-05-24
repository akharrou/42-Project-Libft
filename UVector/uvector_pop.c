/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:27:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 16:28:16 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_pop -- pop an element from the end of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         uvector_pop(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         Pops off the (current) last element of the uvector and
**         returns it.
**
**         The index at which the element was is made to point to
**         NULL.
**
**    RETURN VALUES
**         If successful returns the popped element; otherwise NULL.
*/

#include "../Includes/uvector.h"

void		*uvector_pop(struct s_uvector *self)
{
	void	*element;

	element = NULL;
	if (self->length > 0)
	{
		element = self->uvector[self->length - 1];
		self->uvector[self->length - 1] = NULL;
		self->length -= 1;
	}
	return (element);
}
