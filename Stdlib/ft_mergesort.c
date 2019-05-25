/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:38:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:44:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_mergesort -- brief
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_mergesort(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**         void *data                Pointer to some data.
**
**         PARAM 3          Brief
**
**    DESCRIPTION
**         Description.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Include/string.h"

int		ft_mergesort(void **vector, size_t start, size_t end,
			int (*cmp)(void *, void *))
{
	size_t mid;

	if (vector && cmp)
	{
		if (start != end)
		{
			mid = start + (end - start) / 2;

			// Sort Left Side
			ft_mergesort(vector, start, mid, cmp);

			// Sort Right Side
			ft_mergesort(vector, mid + 1, end, cmp);
		}
	}
	return (0);
}
