/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_enque.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:34:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 18:21:42 by akharrou         ###   ########.fr       */
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
**         uvector_enque(struct s_vector *self, t_data data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         t_data data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the end of a queue (i.e appends to
**         the end of a vector).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/uvector.h"

int		uvector_enque(struct s_vector *self, t_data data)
{
	return (self->append(self, data));
}
