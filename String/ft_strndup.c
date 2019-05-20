/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:14:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 20:05:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dest;
	size_t	len;
	size_t	i;

	dest = NULL;
	if (s1)
	{
		len = ft_strnlen(s1, n);
		dest = malloc(len + 1);
		if (!dest)
			return (NULL);
		i = 0;
		while (i < len)
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

char	*ft_strndupfre(const char *src, size_t n, int free_src)
{
	char	*res;

	res = ft_strndup(src, n);
	if (free_src && src)
		free((void *)src);
	return (res);
}
