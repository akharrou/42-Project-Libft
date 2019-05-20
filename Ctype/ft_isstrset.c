/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 10:42:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 10:17:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_isstrset -- search for string in string table
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_isstrset(const char *str, const char **strset);
**
**    PARAMETERS
**
**         const char *str         String to look for in the string set.
**
**         const char **strset     String table in which to look for 'str'.
**
**    DESCRIPTION
**         Iterates through every string in the string set provided looking
**         for 'str'.
**
**    RETURN VALUES
**         If 'str' is found, returns 1; otherwise 0.
*/

#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"

int			ft_isstrset(const char *str, const char **strset)
{
	int8_t	i;

	if (strset && str)
	{
		i = -1;
		while (strset[++i])
			if (ft_strcmp(strset[i], str) == 0)
				return (1);
	}
	return (0);
}
