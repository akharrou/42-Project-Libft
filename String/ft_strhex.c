/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 17:49:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 12:45:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strhex(const char *str, size_t len)
{
	char	*hexstr;
	char	*tmp;
	size_t	i;
	size_t	j;

	hexstr = NULL;
	if (len > 0)
	{
		if (!(hexstr = (char *)ft_malloc((len * 2) + 1, '\0')))
			return (NULL);
		if (!(tmp = (char *)malloc(2)))
			return (NULL);
		i = 0;
		j = 0;
		while (i < len)
		{
			tmp = ft_itoa_base((uint8_t)str[i++], "0123456789abcdef", 2);
			hexstr[j++] = tmp[0];
			hexstr[j++] = tmp[1];
			free(tmp);
		}
	}
	return (hexstr);
}

char		*ft_strhexfre(const char *str, size_t size)
{
	char	*res;

	res = ft_strhex(str, size);
	free((void *)str);
	return (res);
}
