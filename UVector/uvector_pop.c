/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:43:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 17:16:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_pop -- pop an element from the end of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_integer
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
**         If index is out of bounds of the uvector, 0 is returned.
**
**    RETURN VALUES
**         If the index is inbounds of the uvector, the popped
**         element; otherwise 0.
*/

#include "../Includes/uvector.h"

t_integer	uvector_pop(struct s_uvector *self)
{
	t_integer	element;

	element.int64 = 0;
	if (self->length > 0)
	{
		element = self->uvector[self->length - 1];
		self->uvector[self->length - 1].int64 = 0;
		self->length -= 1;
	}
	return (element);
}
