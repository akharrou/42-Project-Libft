/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:17:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				bytes_left;
	size_t			dst_len;
	size_t			src_len;
	unsigned int	i;
	unsigned int	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	bytes_left = (int)dstsize - dst_len - 1;
	if (bytes_left >= 0)
	{
		i = dst_len;
		j = 0;
		while (bytes_left-- && src[j])
			dst[i++] = src[j++];
		dst[i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + dstsize);
}
