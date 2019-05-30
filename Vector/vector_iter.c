/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:30:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/29 19:06:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_iter -- run a function on every element of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         vector_iter(struct s_vector *self, void (*function)(void *));
**
**    PARAMETERS
**
**         struct s_vector *self       Pointer to a vector instance.
**
**         void (*function)(void *)    Pointer to a function that
**                                     will be called on every
**                                     element of the vector.
**
**    DESCRIPTION
**         Iterates over the vector passing each element of the vector to
**         'function'.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/vector.h"

void		vector_iter(struct s_vector *self, void (*function)(void *))
{
	size_t	i;

	i = 0;
	while (i < self->length)
	{
		function(self->vector[i]);
		++i;
	}
	return ;
}
