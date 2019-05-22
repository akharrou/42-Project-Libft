/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:34:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 18:06:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_push -- push an element to a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_push(struct s_vector *self, void *data);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         void *data                Pointer to some data.
**
**    DESCRIPTION
**         Description.
**
**    RETURN VALUES
**         If successful returns 1; otherwise 0.
*/

#include "../Includes/vector.h"

int		vector_push(struct s_vector *self, void *data)
{
	return (self->append(self, data));
}
