/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:24:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/08 14:05:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_selection_sort -- sort an array by ascending order
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_selection_sort(void *base, size_t length, size_t width,
**             int (*cmp)(const void *, const void *));
**
**    PARAMETERS
**
**         void *base                     Pointer to the initial member of
**                                        an array.
**
**         size_t length                  Number of objects in the array.
**
**         size_t width                   Size of each object (in bytes).
**
**         int (*cmp)(void *, void *)     Comparasion function.
**
**    DESCRIPTION
**         The contents of the array 'base' are sorted in ascending order
**         according to a comparison function pointed to by 'cmp', which
**         requires two arguments pointing to the objects being compared.
**
**         The comparison function must return an integer less than, equal
**         to, or greater than zero if the first argument is considered to
**         be respectively less than, equal to, or greater than the second.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/stdlib_42.h"

int			ft_selection_sort(void *base, size_t length, size_t width,
				int (*cmp)(const void *, const void *))
{
	void	*tmp;
	size_t	lowest;
	size_t	start;
	size_t	i;

	if (!(tmp = (void *)malloc(width)))
		return (-1);
	start = 0;
	while (start < length)
	{
		i = start;
		lowest = start;
		while (i < length)
		{
			if (cmp(base + (lowest * width), base + (i * width)) > 0)
				lowest = i;
			++i;
		}
		ft_memswap(
			base + (start * width), base + (lowest * width), tmp, width);
		++start;
	}
	free(tmp);
	return (0);
}
