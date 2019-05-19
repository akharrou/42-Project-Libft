/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabndup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:18:52 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:45:21 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"

char		**ft_strtabndup(const char **strtab, long n)
{
	char	**strtabdup;
	int		len;
	int		i;

	strtabdup = NULL;
	if (strtab && n > 0)
	{
		len = ft_strtabnlen(strtab, n);
		if (len > 0)
		{
			strtabdup = (char **)malloc(sizeof(char *) * (len + 1));
			i = 0;
			while (i < len)
			{
				strtabdup[i] = ft_strdup(strtab[i]);
				++i;
			}
			strtabdup[i] = NULL;
		}
	}
	return (strtabdup);
}
