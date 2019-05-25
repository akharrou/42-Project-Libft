/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_isempty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:46:28 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:46:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_isempty -- check if a uvector is empty
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_isempty(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         Evaluates the length to capacity status of a uvector and
**         returns either empty or not empty, respectively 1 or
**         0.
**
**    RETURN VALUES
**         If the uvector is empty 1 is returned; otherwise 0.
*/

#include "../Includes/uvector.h"

inline int		uvector_isempty(struct s_uvector *self)
{
	return (self->length == 0);
}
