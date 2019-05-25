/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:49:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:49:18 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_push -- push an element to the top of a stack
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_push(struct s_uvector *self, t_integer data);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         t_integer data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the top of a stack (i.e appends to
**         the end of a uvector).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_push(struct s_uvector *self, t_integer data)
{
	return (self->append(self, data));
}
