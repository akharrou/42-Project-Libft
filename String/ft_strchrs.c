/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:47:58 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/15 07:51:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strchrs(const char *str, const char *charset)
{
	int i;

	if (str && charset)
	{
		while (*str)
		{
			i = 0;
			while (charset[i])
				if (*str == charset[i++])
					return ((char *)str);
			++str;
		}
	}
	return (NULL);
}
