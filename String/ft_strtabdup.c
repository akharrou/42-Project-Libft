/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:43:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:44:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		**ft_strtabdup(const char **strtab)
{
	char	**strtabdup;
	int		len;
	int		i;

	strtabdup = NULL;
	if (strtab)
	{
		len = ft_strtablen(strtab);
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
