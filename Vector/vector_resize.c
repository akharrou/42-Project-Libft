/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:28:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 14:27:12 by akharrou         ###   ########.fr       */
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
**         Description.
**
**    RETURN VALUES
**         Returns the vector resized.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_resize(struct s_vector instance, size_t new_size)
{
	void			*new_vector;

	new_vector = ft_realloc(instance.vector, ((new_size + 1) * sizeof(void *)));
	if (new_vector != NULL)
	{
		instance.vector = new_vector;
		instance.capacity = new_size;
	}
	return (instance);
}
