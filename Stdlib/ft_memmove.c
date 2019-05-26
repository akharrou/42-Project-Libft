/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 07:11:34 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 16:56:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *src_chr_p;
	unsigned char *dst_chr_p;

	src_chr_p = (unsigned char *)src;
	dst_chr_p = (unsigned char *)dst;
	if (src < dst)
	{
		src_chr_p = src_chr_p + len - 1;
		dst_chr_p = dst_chr_p + len - 1;
		while (len-- > 0)
			*dst_chr_p-- = *src_chr_p--;
	}
	else
		while (len-- > 0)
			*dst_chr_p++ = *src_chr_p++;
	return (dst);
}
