/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_extendleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:05:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 12:26:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_extendleft -- append to the left multiple elements to a
**                              vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_extendleft(struct s_vector *self, size_t n, ...);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         size_t n                  Number of elements passed as
**                                   additional arguments.
**
**         ...                       (Additional arguments); pointers
**                                   to data.
**
**    DESCRIPTION
**         Adds multiple elements, one element at a time (in the order that
**         they are given) to
**         the front of the vector, if elements already exist at the front
**         the vector, they will be shifted forward so as to not overwrite
**         them.
**
**         If the vector does not contain enough space for the elements
**         then the vector is first resized to be able to accomodate them
**         and then the elements are prepended.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"
#include <stdarg.h>

int		vector_extendleft(struct s_vector *self, size_t n, ...)
{
	int		ret;
	va_list	ap;
	size_t	i;

	while (self->length + n >= self->capacity)
		(*self) = vector.resize(*self, self->capacity * VECTOR_SIZE_MULTIPLIER);
	(*self) = vector.rightshift(*self, n);
	va_start(ap, n);
	ret = 1;
	i = 1;
	while (ret == 1 && i <= n)
	{
		ret = self->insert(self, (n - i), va_arg(ap, void *));
		++i;
	}
	va_end(ap);
	return (ret);
}
