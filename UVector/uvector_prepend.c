/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:54:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 18:21:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_prepend -- add an element to the front of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_prepend(struct s_vector *self, t_data data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         t_data data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the beginning of the vector (i.e at
**         index 0).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_prepend(struct s_vector *self, t_data data)
{
	if (self->isfull(self) == 1)
		(*self) = vector.resize(*self, self->capacity * uvector_SIZE_MULTIPLIER);
	(*self) = vector.rightshift(*self, 1);
	if (self->isfull(self) == 0)
		return (self->insert(self, 0, data));
	return (0);
}
