/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 14:52:21 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_chr_p;
	unsigned char	*s2_chr_p;

	if (n > 0)
	{
		s1_chr_p = (unsigned char *)s1;
		s2_chr_p = (unsigned char *)s2;
		while (--n > 0 && *s1_chr_p == *s2_chr_p)
		{
			++s1_chr_p;
			++s2_chr_p;
		}
		return ((*s1_chr_p) - (*s2_chr_p));
	}
	return (0);
}
