/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_viter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 18:45:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/06 03:30:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_viter -- run a function on every element of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         vector_viter(struct s_vector *self,
**             void (*function)(void *, va_list ap), ...);
**
**    PARAMETERS
**
**         struct s_vector *self                   Pointer to a vector
**                                                 instance.
**
**         void (*function)(void *, va_list ap)    Pointer to a function that
**                                                 will be called on every
**                                                 element of the vector.
**
**                                                 A list of arguments will
**                                                 also be passed to it with
**                                                 every element of the vector.
**
**         ...                                     (Additional arguments);
**                                                 arguments that will be made
**                                                 into a 'va_list' and passed
**                                                 to 'function'.
**
**    DESCRIPTION
**         Iterates over the vector passing each element of the vector to
**         'function' as well as a list of the additonal arguments.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/vector.h"

void		vector_viter(struct s_vector *self,
				void (*function)(void *, va_list ap), ...)
{
	va_list tmp_ap;
	va_list ap;
	size_t	i;

	va_start(ap, function);
	i = 0;
	while (i < self->length)
	{
		va_copy(tmp_ap, ap);
		function(self->vector[i], tmp_ap);
		++i;
	}
	va_end(ap);
}
