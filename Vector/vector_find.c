/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:11:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 18:06:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_find -- get the index of some data (using a filter)
**
**    SYNOPSIS
**         #include <libft.h>
**
**         ssize_t
**         vector_find(struct s_vector *self, int (*filter)(void *));
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         int (*filter)(void *)     Filter function that returns 1
**                                   if the element passed to it is
**                                   to be kept; otherwise 0.
**
**    DESCRIPTION
**         Trys to find a data element with the provided filter function.
**
**    RETURN VALUES
**         If found, the index of the data element is returned; otherwise -1.
*/

#include "../Includes/vector.h"

ssize_t		vector_find(struct s_vector *self, int (*filter)(void *))
{
	ssize_t	i;

	i = 0;
	while (i < (ssize_t)self->length)
	{
		if (filter(self->vector[i]) == 1)
			return (i);
		++i;
	}
	return (-1);
}
