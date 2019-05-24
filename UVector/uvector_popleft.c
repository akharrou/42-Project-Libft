/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_popleft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:31:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 16:16:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_popleft -- pop an element from the front of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
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
**         If successful returns the popped element; otherwise NULL.
*/

#include "../Includes/uvector.h"

void	*uvector_popleft(struct s_uvector *self)
{
	void	*element;

	element = self->uvector[0];
	self->uvector[0] = NULL;
	self->length -= 1;
	(*self) = uvector.leftshift(*self, 1);
	return (element);
}