/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:14:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/02 19:40:46 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dst;
	size_t	i;

	if (!(dst = (char *)malloc(ft_strnlen(src, n) + 1)))
		return (NULL);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strndupfre(const char *src, size_t n, int free_src)
{
	char	*res;

	res = ft_strndup(src, n);
	if (free_src && src)
		free((void *)src);
	return (res);
}
