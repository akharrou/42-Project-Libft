/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_isfull.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:43:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 12:00:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_isfull -- check if a vector is at full capacity
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_isfull(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Evaluates the length to capacity status of a vector and
**         returns either full or not full, respectively 1 or
**         0.
**
**    RETURN VALUES
**         If the vector is full 1 is returned; otherwise 0.
*/

#include "../Includes/vector.h"

inline int		vector_isfull(struct s_vector *self)
{
	return (self->length >= self->capacity);
}
