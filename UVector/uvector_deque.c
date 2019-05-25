/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_deque.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:46:58 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:46:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_deque -- deque the first element of a queue in a uvector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_integer
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
**         Returns the deque'd element.
*/

#include "../Includes/uvector.h"

t_integer	uvector_deque(struct s_uvector *self)
{
	return (self->popleft(self));
}
