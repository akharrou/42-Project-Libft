/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 20:07:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			dst_len;
	size_t			src_len;
	int				bytes_left;
	unsigned int	i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_left = (int)size - 1;
	if (bytes_left >= 0)
	{
		i = 0;
		while (bytes_left-- && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (src_len);
	}
	return (src_len + size);
}
