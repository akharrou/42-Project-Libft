/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrsets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:32:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 10:15:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_isstrsets -- search for string in the given set
**                         of string tables
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_isstrsets(const char *str, int sets, ...);
**
**    PARAMETERS
**
**         const char *str       String to look for in the set of
**                               string tables.
**
**         int sets              Number of string tables provided
**                               in the additional arguments.
**
**         ...                   String tables in which to search
**                               for 'str'.
**
**    DESCRIPTION
**         Iterates through every string in every set provided looking
**         for 'str'.
**
**    RETURN VALUES
**         If 'str' is found, returns 1; otherwise 0.
*/

#include "../Includes/ctype_42.h"
#include <stdarg.h>

int		ft_isstrsets(const char *str, int sets, ...)
{
	va_list		args;
	const char	**strset;
	int			verdict;
	int			i;

	verdict = 0;
	if (str)
	{
		va_start(args, sets);
		i = 0;
		while (sets > i)
		{
			strset = va_arg(args, const char **);
			if (ft_isstrset(str, strset))
			{
				verdict = 1;
				break ;
			}
			++i;
		}
		va_end(args);
	}
	return (verdict);
}
