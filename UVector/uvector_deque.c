/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_deque.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:34:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 18:05:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_deque -- deque the first element of a queue in a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         uvector_deque(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         De-queues the first element of the queue in the uvector.
**
**    RETURN VALUES
**         If successful returns the dequed element; otherwise NULL.
*/

#include "../Includes/uvector.h"

void		*uvector_deque(struct s_uvector *self)
{
	return (self->popleft(self));
}
