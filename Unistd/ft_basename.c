/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 02:23:57 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/07 02:26:36 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"

void		ft_basename(const char *path, char *basename)
{
	char	**strtab;

	strtab = ft_strsplit(path, "/");
	ft_strncpy(
		basename, strtab[ft_strtablen((const char**)strtab) - 1], MAX_NAMELEN);
	freestrtab(&strtab);
}
