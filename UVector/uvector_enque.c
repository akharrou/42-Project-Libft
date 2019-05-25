/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_enque.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:47:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:47:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_enque -- enque an element to the back of a queue
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_enque(struct s_uvector *self, t_integer data);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**         t_integer data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the end of a queue (i.e appends to
**         the end of a uvector).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_enque(struct s_uvector *self, t_integer data)
{
	return (self->append(self, data));
}
