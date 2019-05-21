/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_extendleft.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:05:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 12:25:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_extendleft -- prepend multiple elements to a vector
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
**         Adds multiple elements (in the order that they are given) to
**         the front of the vector, if elements already exist at the front
**         the vector, they will be moved 'n' positions forward.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/vector.h"
#include <stdarg.h>

/* TODO :
**  - move every single element from the beginning by 'n'
**  - insert the provided elements to the front of the vector
*/
int		vector_extendleft(struct s_vector *self, size_t n, ...)
{
	va_list	ap;
	size_t	i;

	va_start(ap, n);
	va_end(ap);
	return (0);
}
