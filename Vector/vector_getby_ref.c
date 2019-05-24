/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_getby_ref.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:16:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:25:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_getby_ref -- retrieve some data using a reference
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         vector_getby_ref( struct s_vector *self,
**                           void *ref,
**                           int (*cmp)(void *ref, void *data) );
**
**    PARAMETERS
**
**         struct s_vector *self                Pointer to a vector instance.
**
**         void *ref                            Reference data that can be
**                                              used to find the data element
**                                              that is looked for in the
**                                              vector.
**
**         int (*cmp)(void *ref, void *data)    Comparasion function that
**                                              checks if the data element
**                                              corresponds to the reference
**                                              and returns 0 if it does.
**
**    DESCRIPTION
**         Trys to find a data element that matches the reference provided
**         (i.e 'ref') using the provided comparasion function (i.e 'cmp').
**
**    RETURN VALUES
**         If found, the data element is returned; otherwise NULL is
**         returned.
*/

#include "../Includes/vector.h"

void	*vector_getby_ref(struct s_vector *self, void *ref,
			int (*cmp)(void *ref, void *data))
{
	size_t	i;

	i = 0;
	while (i < self->length)
	{
		if (cmp(ref, self->vector[i]) == 0)
			return (self->vector[i]);
		++i;
	}
	return (NULL);
}
