/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_extend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:47:16 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 13:14:13 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_extend -- append multiple elements to a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_extend(struct s_uvector *self, size_t n, ...);
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
**         Adds multiple elements (in the order that they are given)
**         to the (current) end of a uvector.
**
**         If the uvector does not contain enough space for the elements
**         then the uvector is first resized to be able to accomodate them
**         and then the elements are appended.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"
#include <stdarg.h>

int		uvector_extend(struct s_uvector *self, size_t n, ...)
{
	int			ret;
	va_list		ap;
	size_t		i;

	va_start(ap, n);
	ret = 1;
	i = 0;
	while (ret == 1 && i < n)
	{
		ret = self->append(self, va_arg(ap, intmax_t));
		++i;
	}
	va_end(ap);
	return (ret);
}
