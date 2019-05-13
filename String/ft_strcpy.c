/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 15:23:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/12 09:22:01 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (*src)
		dst[i++] = *src++;
	dst[i] = *src;
	return (dst);
}

char	*ft_strcpyfre(char *dst, const char *src, int free_dst, int free_src)
{
	char	*res;

	res = ft_strcpy(dst, src);
	if (free_dst && dst)
		free(dst);
	if (free_src && src)
		free((char *)src);
	return (res);
}
