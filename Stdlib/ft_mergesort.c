/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mergesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:38:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:05:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/string.h"

/* TODO : implement this function */
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
	return ();
