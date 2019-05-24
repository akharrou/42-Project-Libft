/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_popleft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:43:56 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 15:44:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_popleft -- pop an element from the front of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_integer
**         uvector_popleft(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         Pops off the first element of the uvector and returns it.
**
**         All elements that preceed the popped element are moved
**         backwards by one index.
**
**    RETURN VALUES
**         Returns the popped element.
*/

#include "../Includes/uvector.h"

t_integer	uvector_popleft(struct s_uvector *self)
{
	t_integer	element;

	element = self->uvector[0];
	self->length -= 1;
	(*self) = uvector.leftshift(*self, 1);
	return (element);
}
