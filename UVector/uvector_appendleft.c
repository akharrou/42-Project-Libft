/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_appendleft.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:35:30 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:35:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_appendleft -- add an element to the front of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_appendleft(struct s_uvector *self, intmax_t data);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         intmax_t data              Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the beginning of the uvector (i.e at
**         index 0).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_appendleft(struct s_uvector *self, intmax_t data)
{
	if (self->isfull(self) == 1)
		(*self) = uvector.resize(
			*self, self->capacity * UVECTOR_SIZE_MULTIPLIER);
	(*self) = uvector.rightshift(*self, 1);
	if (self->isfull(self) == 0)
		return (self->insert(self, 0, data));
	return (0);
}
