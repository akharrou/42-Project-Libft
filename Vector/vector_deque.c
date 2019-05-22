/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_deque.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:34:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 18:05:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_deque -- deque the first element of a queue in a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         vector_deque(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         De-queues the first element of the queue in the vector.
**
**    RETURN VALUES
**         If successful returns the dequed element; otherwise NULL.
*/

#include "../Includes/vector.h"

void		*vector_deque(struct s_vector *self)
{
	return (self->popleft(self));
}
