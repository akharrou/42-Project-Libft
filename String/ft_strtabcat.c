/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 12:37:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/17 12:37:48 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	**ft_strtabcat(char **dst, char **src)
{
	size_t	i;
	size_t	j;

	if (dst && src)
	{
		i = ft_strtablen((const char **)dst);
		if (i > 0)
		{
			j = 0;
			while (src[j])
				dst[i++] = src[j++];
			dst[i] = NULL;
		}
	}
	return ((char **)dst);
}
