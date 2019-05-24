/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:10:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:15:52 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_get -- retrieve data at index 'i'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         vector_get(struct s_vector *self, size_t i);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         size_t i                  Index in the vector.
**
**    DESCRIPTION
**         Fetches and returns the pointer found at index 'i' in
**         the vector.
**
**         If 'i' is out of the bounds of the vector, then NULL is
**         returned.
**
**    RETURN VALUES
**         Returns a pointer to the data at that index; otherwise
**         NULL is returned.
*/

#include "../Includes/vector.h"

void		*vector_get(struct s_vector *self, size_t i)
{
	if (i < self->capacity)
		return (self->vector[i]);
	return (NULL);
}
