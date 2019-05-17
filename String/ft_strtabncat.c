/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabncat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 12:36:30 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/17 12:37:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	**ft_strtabncat(char **dst, char **src, long n)
{
	size_t	i;
	size_t	j;

	if (dst && src)
	{
		i = ft_strtablen((const char **)dst);
		if (i > 0)
		{
			j = 0;
			while (n-- > 0 && src[j])
				dst[i++] = src[j++];
			dst[i] = NULL;
		}
	}
	return ((char **)dst);
}
