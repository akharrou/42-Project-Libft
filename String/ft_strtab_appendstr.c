/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab_appendstr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 12:38:56 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/17 12:44:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char	**ft_strtab_appendstr(const char **strtab, char *str)
{
	char	**new_strtab;

	if (strtab || str)
	{
		if (!str)
			return (ft_strtabdup(strtab));
		if (!strtab)
			return (ft_strtab(1, str));
		new_strtab = ft_strtabnew(ft_strtablen(strtab) + 1);
		if (!new_strtab)
			return (NULL);
		return (
			ft_strtabcat(
				ft_strtabcat(
					new_strtab, (char **)strtab), ft_strtab(1, str)));
	}
	return (NULL);
}

char	**ft_strtab_appendstrfre(const char **strtab, char *str,
			int free_s1, int free_s2)
{
	char **new_strtab;

	new_strtab = ft_strtab_appendstr(strtab, str);
	if (free_s1 && strtab)
	{
		while (*strtab)
		{
			free((void *)(*strtab));
			strtab++;
		}
		free((void *)strtab);
	}
	if (free_s2 && str)
		free((void *)str);
	return (new_strtab);
}
