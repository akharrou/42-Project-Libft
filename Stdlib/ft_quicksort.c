/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:36:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/26 16:25:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_quicksort -- sort an array by ascending order
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_quicksort(void *base, size_t length, size_t width,
**             int (*cmp)(void *, void *));
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

int		ft_quicksort(void *base, size_t length, size_t width,
			int (*cmp)(void *, void *))
{
	void	*tmp;
	size_t	i;
	size_t	j;

	if (length < 1)
		return (0);
	if (!(tmp = (void *)malloc(width)))
		return (-1);
	i = 1;
	j = length - 1;
	while (i < j)
	{
		while (i < j && cmp(base, base + (i * width)) > 0)
			++i;
		while (i <= j && cmp(base, base + (j * width)) <= 0)
			--j;
		if (i < j)
			ft_memswap(base + (i++ * width), base + (j-- * width), tmp, width);
	}
	ft_memswap(base, base + (j * width), tmp, width);
	free(tmp);
	if (ft_quicksort(base, j, width, cmp) == -1 ||
	ft_quicksort(base + (j + 1) * width, length - j - 1, width, cmp) == -1)
		return (-1);
	return (0);
}
