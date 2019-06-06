/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:11:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 17:34:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_count -- count number of occurences of a certain type of
**                         data element (using a filter function)
**
**    SYNOPSIS
**         #include <libft.h>
**
**         size_t
**         vector_count(struct s_vector *self, int (*filter)(void *));
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         int (*filter)(void *)     Filter function that returns 1
**                                   if the element is to be kept;
**                                   otherwise 0.
**
**    DESCRIPTION
**         Counts up the number of times that the filter function returns 1.
**
**    RETURN VALUES
**         Returns the final count.
*/

#include "../Includes/vector.h"

size_t	vector_count(struct s_vector *self, int (*filter)(void *))
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (i < self->length)
	{
		count += ((filter(self->vector[i]) > 0) ? 1 : 0);
		++i;
	}
	return (count);
}
