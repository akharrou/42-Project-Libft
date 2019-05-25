/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:29:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 17:13:02 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_get -- retrieve data at index 'i'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_intger
**         uvector_get(struct s_uvector *self, size_t i);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         size_t i                   Index in the uvector.
**
**    DESCRIPTION
**         Fetches and returns the value found at index 'i' in
**         the uvector.
**
**         If 'i' is out of the bounds of the uvector, then undetermined
**         data is returned.
**
**    RETURN VALUES
**         If the index is inbounds of the uvector, the popped
**         element; otherwise 0.
*/

#include "../Includes/uvector.h"

t_integer		uvector_get(struct s_uvector *self, size_t i)
{
	t_integer	value;

	value.int64 = 0;
	if (i < self->capacity)
		value = self->uvector[i];
	return (value);
}
