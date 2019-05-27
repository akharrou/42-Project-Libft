/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_isvoid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:12:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 12:01:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_isvoid -- check if a vector is void
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_isvoid(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Checks if capacity is 0 or that the pointer to the vector.
**         field is pointing to NULL.
**
**    RETURN VALUES
**         If the vector is void 1 is returned; otherwise 0.
*/

#include "../Includes/vector.h"

inline int		vector_isvoid(struct s_vector *self)
{
	return (self->capacity == 0 || self->vector == NULL);
}
