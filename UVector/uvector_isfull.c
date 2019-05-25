/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_isfull.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:47:33 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:47:33 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_isfull -- check if a uvector is at full capacity
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_isfull(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         Evaluates the length to capacity status of a uvector and
**         returns either full or not full, respectively 1 or
**         0.
**
**    RETURN VALUES
**         If the uvector is full 1 is returned; otherwise 0.
*/

#include "../Includes/uvector.h"

inline int		uvector_isfull(struct s_uvector *self)
{
	return (self->length >= self->capacity);
}
