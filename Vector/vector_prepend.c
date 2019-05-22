/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:54:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 19:50:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_prepend -- brief
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_prepend(struct s_vector *self, void *data);
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

int		vector_prepend(struct s_vector *self, void *data)
{

	return (0);
}

int			vector_rightshift(struct s_vector *self, size_t n)
{
	size_t	i;
	size_t	j;

	i = self->capacity - 1;
	if (self->vector[i] != NULL)
		self->load -= 1;
	while (i - (n - 1) > 0)
	{
		if (self->capacity)
			self->free(self->vector[i]);
		self->vector[i] = self->vector[i - n];
		--i;
	}
	j = 0;
	while (j <= i)
	{
		self->vector[j] = NULL;
		++j;
	}
	return (1);
}

int			vector_leftshift(struct s_vector *self, size_t n)
{
	size_t	i;

	i = 0;
	if (i + n < self->capacity)
	{
		while (self->vector[i + n] != NULL)
		{
			self->free(self->vector[i]);
			self->vector[i] = self->vector[i + n];
			++i;
		}
		while (self->vector[i] != NULL)
		{
			self->vector[i] = NULL;
			++i;
		}
	}
	return (1);
}
