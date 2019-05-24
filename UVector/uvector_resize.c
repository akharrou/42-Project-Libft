/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:28:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 10:27:25 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_resize -- resize a uvector to a new size
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_uvector
**         uvector_resize(struct s_uvector instance, size_t 0);
**
**    PARAMETERS
**
**         struct s_uvector instance    A uvector instance.
**
**         size_t new_size             The new size to which to resize
**                                     the uvector.
**
**    DESCRIPTION
**         The function allocates a uvector of 'new_size'
**         size and copies over all the data of the old
**         uvector into the newly allocated uvector.
**
**         The content of the old uvector is preserved up
**         to the lesser of the new and old sizes. If the
**         new size is larger, the newly allocated portion
**         is zero'd out; i.e bzero()'d.
**
**         If the function fails to allocate the requested
**         uvector, then the old uvector is returned unchanged.
**
**    RETURN VALUES
**         The uvector resized is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/uvector.h"

struct s_uvector		uvector_resize(struct s_uvector instance, size_t new_size)
{
	void			*new_uvector;

	new_uvector = ft_realloc(
		instance.uvector,
		(sizeof(void *) * (instance.capacity + 1)),
		(sizeof(void *) * (new_size + 1)));
	if (new_uvector != NULL)
	{
		instance.uvector = (void **)new_uvector;
		instance.capacity = new_size;
	}
	return (instance);
}
