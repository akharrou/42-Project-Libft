/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 02:23:57 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/10 17:41:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"

char		*ft_basename(char *dest, const char *path)
{
	char	**strtab;

	while (*path == '/')
		++path;
	if (*path == '\0')
	{
		ft_strncpy(dest, "/", MAX_NAMELEN);
		return (dest);
	}
	strtab = ft_strsplit(path, "/");
	ft_strncpy(
		dest, strtab[ft_strtablen((const char**)strtab) - 1], MAX_NAMELEN);
	freestrtab(&strtab);
	return (dest);
}
