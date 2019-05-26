/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:38:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 19:46:35 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_mergesort -- sort an array by ascending order
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_mergesort(void *base, size_t length, size_t width,
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
#include "../Includes/math_42.h"

void		*merge(void *base, size_t length, size_t width,
				int (*cmp)(void *, void *))
{
	void	*sorted_right;
	void	*sorted_left;
	size_t	i;
	size_t	j;
	size_t	length_right_side;

	sorted_left = base;
	sorted_right = base + (((size_t)CEIL((double)length / (double)2)) * 8);
	i = 0;
	j = 0;
	length_right_side = ;
	while (i + j < length)
	{

	}

	return ;
}

int			ft_mergesort(void *base, size_t length, size_t width,
				int (*cmp)(void *, void *))
{
	if (length > 1)
	{
		ft_mergesort(
			base,
			((size_t)FLOOR((double)length / (double)2)),
			width,
			cmp);
		ft_mergesort(
			base + (((size_t)CEIL((double)length / (double)2)) * 8),
			((size_t)CEIL((double)length / (double)2)),
			width,
			cmp);
		merge(base, length, width, cmp);
	}
	return (0);
}
