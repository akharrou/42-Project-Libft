/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:53:27 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 19:25:46 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_append -- add an element to the back of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_append(struct s_uvector *self, t_integer data);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         t_integer data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to end of the uvector.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_append(struct s_uvector *self, t_integer data)
{
	if (self->isfull(self) == 1)
		(*self) = uvector.resize(
			*self, self->capacity * UVECTOR_SIZE_MULTIPLIER);
	if (self->isfull(self) == 0)
	{
		self->uvector[self->length] = data;
		self->length += 1;
		return (1);
	}
	return (0);
}
