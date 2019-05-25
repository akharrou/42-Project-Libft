/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_setall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:31:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:38:12 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_setall -- sets all elements of a uvector to 'value'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         uvector_setall(struct s_uvector *self, intmax_t value);
**
**    PARAMETERS
**
**         struct s_uvector *self     Pointer to a uvector instance.
**
**    DESCRIPTION
**         Iterates over and sets every element of the uvector to 'value'.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/uvector.h"

void	uvector_setall(struct s_uvector *self, intmax_t value)
{
	size_t	i;

	i = 0;
	while (i < self->capacity)
	{
		self->uvector[i] = value;
		++i;
	}
	self->length = self->capacity;
}
