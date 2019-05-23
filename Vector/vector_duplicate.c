/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_duplicate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 19:01:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:44:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_duplicate -- duplicate a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_duplicate(struct s_vector instance);
**
**    PARAMETERS
**
**         struct s_vector self     A vector instance.
**
**    DESCRIPTION
**         Makes a duplicate of a vector and returns it.
**
**    RETURN VALUES
**         If successful returns the duplicate of the passed
**         in vector; otherwise the passed in vector unchanged
**         is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/vector.h"

struct s_vector		vector_duplicate(struct s_vector instance)
{
	struct s_vector		duplicate;

	duplicate = vector.constructor(instance.capacity, instance.free);
	duplicate.vector = ft_memdup(instance.vector, instance.capacity);
	if (!duplicate.vector)
		return (instance);
	return (duplicate);
}
