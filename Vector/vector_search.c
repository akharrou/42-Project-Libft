/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 19:21:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 18:06:48 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_search -- get the index of some data (using a reference)
**
**    SYNOPSIS
**         #include <libft.h>
**
**         ssize_t
**         vector_search(struct s_vector *self, void *ref,
**             int (*cmp)(void *ref, void *data));
**
**    PARAMETERS
**
**         struct s_vector *self                Pointer to a vector instance.
**
**         void *ref                            Reference data that can be
**                                              used to find the data element
**                                              in the vector.
**
**         int (*cmp)(void *ref, void *data)    Comparasion function that
**                                              checks returns the integer
**                                              0 if the reference does
**                                              correspond to the data.
**
**    DESCRIPTION
**         Trys to find a data element based on a provided reference
**         (i.e 'ref') using the provided comparasion function (i.e 'cmp').
**
**    RETURN VALUES
**         If found, the index of the data element is returned; otherwise -1.
*/

#include "../Includes/vector.h"

ssize_t		vector_search(struct s_vector *self, void *ref,
				int (*cmp)(void *ref, void *data))
{
	ssize_t	i;

	i = 0;
	while (i < (ssize_t)self->length)
	{
		if (cmp(ref, self->vector[i]) == 0)
			return (i);
		++i;
	}
	return (-1);
}
