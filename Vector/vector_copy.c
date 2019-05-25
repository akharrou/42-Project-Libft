/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:10:09 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:10:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_copy -- create a shallow copy of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_copy(struct s_vector instance);
**
**    PARAMETERS
**
**         struct s_vector self     A vector instance.
**
**    DESCRIPTION
**         Makes a duplicate of a vector and returns
**         it. The vector only in as far as the pointers
**         to each data is copied. The data to which
**         the pointers point to is not copied (it is
**         not a deep copy).
**
**    RETURN VALUES
**         If successful returns a duplicate instance of the
**         passed in instance; otherwise the passed in instance
**         unchanged is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_copy(struct s_vector instance)
{
	struct s_vector		duplicate;

	duplicate = vector.constructor(instance.capacity, instance.free);
	duplicate.vector = ft_memdup(
		instance.vector, (instance.capacity + 1) * sizeof(void *));
	if (!duplicate.vector)
		return (instance);
	duplicate.length = instance.length;
	return (duplicate);
}
