/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:37:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:37:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_insert -- insert an element in a uvector at index 'i'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_insert(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         size_t i                  Index in the uvector at which to
**                                   insert the data.
**
**         intmax_t data              Pointer to some data.
**
**    DESCRIPTION
**         If possible inserts 'data' in the uvector at index 'i'.
**
**         If some element exists at that index, then the element is
**         first free'd and then 'data' is inserted in its place.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/uvector.h"

int		uvector_insert(struct s_uvector *self, size_t i, intmax_t data)
{
	if (i < self->capacity)
	{
		self->uvector[i] = data;
		self->length += 1;
		return (1);
	}
	return (0);
}
