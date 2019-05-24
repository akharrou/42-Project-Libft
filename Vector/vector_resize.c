/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:28:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 10:27:25 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_resize -- resize a vector to a new size
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_resize(struct s_vector instance, size_t 0);
**
**    PARAMETERS
**
**         struct s_vector instance    A vector instance.
**
**         size_t new_size             The new size to which to resize
**                                     the vector.
**
**    DESCRIPTION
**         The function allocates a vector of 'new_size'
**         size and copies over all the data of the old
**         vector into the newly allocated vector.
**
**         The content of the old vector is preserved up
**         to the lesser of the new and old sizes. If the
**         new size is larger, the newly allocated portion
**         is zero'd out; i.e bzero()'d.
**
**         If the function fails to allocate the requested
**         vector, then the old vector is returned unchanged.
**
**    RETURN VALUES
**         The vector resized is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_resize(struct s_vector instance, size_t new_size)
{
	void			*new_vector;

	new_vector = ft_realloc(
		instance.vector,
		(sizeof(void *) * (instance.capacity + 1)),
		(sizeof(void *) * (new_size + 1)));
	if (new_vector != NULL)
	{
		instance.vector = (void **)new_vector;
		instance.capacity = new_size;
	}
	return (instance);
}
