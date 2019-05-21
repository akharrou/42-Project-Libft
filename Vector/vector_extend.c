/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_extend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:02:57 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 12:24:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_extend -- append multiple elements to a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_extend(struct s_vector *self, size_t n, ...);
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
**         Adds multiple elements (in the order that they are given)
**         to the (current) end of a vector.
**
**         If the vector does not contain enough space for the elements
**         then the vector is resized first to accomodate them and then
**         the elements are appended.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/vector.h"
#include <stdarg.h>

int		vector_extend(struct s_vector *self, size_t n, ...)
{
	va_list	ap;
	size_t	i;

	va_start(ap, n);

	va_end(ap);
	return (0);
}