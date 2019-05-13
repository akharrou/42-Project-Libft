/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 17:49:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/13 10:06:48 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strhex(const char *decstr)
{
	char	*hexstr;
	char	*tmp;
	int		len;
	int		i;
	int		j;

	hexstr = NULL;
	len = ft_strlen(decstr);
	if (len > 0)
	{
		if (!(hexstr = ft_malloc((len * 2) + 1, '\0')))
			return (NULL);
		if (!(tmp = malloc(2)))
			return (NULL);
		i = 0;
		j = 0;
		while (i < len)
		{
			tmp = ft_itoa_base((uint8_t)decstr[i++], "0123456789abcdef", 2);
			hexstr[j++] = tmp[0];
			hexstr[j++] = tmp[1];
		}
		free(tmp);
	}
	return (hexstr);
}

char		*ft_strhexfre(const char *decstr)
{
	char	*res;

	res = ft_strhex(decstr);
	free((void *)decstr);
	return (res);
}
