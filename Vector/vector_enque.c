/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_enque.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:34:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 10:55:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_enque -- enque an element to the back of a queue
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_enque(struct s_vector *self, void *data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         void *data                Pointer to some data.
**
**    DESCRIPTION
**         Adds an element to the end of a queue (i.e appends to
**         the end of a vector).
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int		vector_enque(struct s_vector *self, void *data)
{
	return (self->append(self, data));
}
