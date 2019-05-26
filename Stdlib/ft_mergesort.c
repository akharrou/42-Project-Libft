/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:38:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/26 11:33:26 by akharrou         ###   ########.fr       */
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

static int	merge(void *base[2], size_t length[2], size_t width,
				int (*cmp)(void *, void *))
{
	void	*tmp;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!(tmp = ft_malloc(((length[0] + length[1]) * width), '\0')))
		return (-1);
	i = 0;
	j = 0;
	k = 0;
	while (i < length[0] && j < length[1])
		if (cmp(base[0] + (i * width), base[1] + (j * width)) <= 0)
			ft_memmove(tmp + (k++ * width), base[0] + (i++ * width), width);
		else
			ft_memmove(tmp + (k++ * width), base[1] + (j++ * width), width);
	while (i < length[0])
		ft_memmove(tmp + (k++ * width), base[0] + (i++ * width), width);
	while (j < length[1])
		ft_memmove(tmp + (k++ * width), base[1] + (j++ * width), width);
	ft_memmove(base[0], tmp, ((length[0] + length[1]) * width));
	free(tmp);
	return (0);
}

int			ft_mergesort(void *base, size_t length, size_t width,
				int (*cmp)(void *, void *))
{
	size_t	half_lengths[2];
	void	*half_bases[2];
	int		ret1;
	int		ret2;

	if (length > 1)
	{
		half_lengths[0] = (length / 2);
		half_lengths[1] = (length / 2) + (length % 2);
		half_bases[0] = base;
		half_bases[1] = base + (half_lengths[0] * width);
		ret1 = ft_mergesort(half_bases[0], half_lengths[0], width, cmp);
		ret2 = ft_mergesort(half_bases[1], half_lengths[1], width, cmp);
		if (ret1 == -1 || ret2 == -1)
			return (-1);
		return (merge(half_bases, half_lengths, width, cmp));
	}
	return (0);
}
