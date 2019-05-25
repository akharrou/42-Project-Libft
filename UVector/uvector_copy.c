/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:37:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:37:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_copy -- create a shallow copy of a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_uvector
**         uvector_copy(struct s_uvector instance);
**
**    PARAMETERS
**
**         struct s_uvector self     A uvector instance.
**
**    DESCRIPTION
**         Makes a duplicate of a uvector and returns
**         it. The uvector only in as far as the pointers
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
#include "../Includes/uvector.h"

struct s_uvector		uvector_copy(struct s_uvector instance)
{
	struct s_uvector		duplicate;

	duplicate = uvector.constructor(instance.capacity);
	duplicate.uvector = ft_memdup(
		instance.uvector, (instance.capacity) * sizeof(intmax_t));
	if (!duplicate.uvector)
		return (instance);
	duplicate.length = instance.length;
	return (duplicate);
}
