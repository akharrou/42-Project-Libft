/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:54:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:21:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_prepend -- brief
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_prepend(struct s_vector *self, void *data);
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

int		vector_prepend(struct s_vector *self, void *data)
{
	if (self->isfull(self) == 1)
		(*self) = vector.resize(*self, self->capacity * VECTOR_SIZE_MULTIPLIER);
	(*self) = vector.rightshift(*self, 1);
	if (self->isfull(self) == 0)
		return (self->insert(self, 0, data));
	return (0);
}
