/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_extendleft.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:47:21 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:37:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_extendleft -- append to the left multiple elements to a
**                              uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_extendleft(struct s_uvector *self, size_t n, ...);
**
**    PARAMETERS
**
**         struct s_uvector *self    Pointer to a uvector instance.
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
**         the front of the uvector, if elements already exist at the front
**         the uvector, they will be shifted forward so as to not overwrite
**         them.
**
**         If the uvector does not contain enough space for the elements
**         then the uvector is first resized to be able to accomodate them
**         and then the elements are prepended.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"
#include <stdarg.h>

int				uvector_extendleft(struct s_uvector *self, size_t n, ...)
{
	int			ret;
	va_list		ap;
	size_t		i;

	while (self->length + n >= self->capacity)
		(*self) = uvector.resize(
			*self, self->capacity * UVECTOR_SIZE_MULTIPLIER);
	(*self) = uvector.rightshift(*self, n);
	va_start(ap, n);
	ret = 1;
	i = 1;
	while (ret == 1 && i <= n)
	{
		ret = self->insert(self, (n - i), va_arg(ap, intmax_t));
		++i;
	}
	va_end(ap);
	return (ret);
}
