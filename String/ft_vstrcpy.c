/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:52:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/07 19:09:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_vstrcpy -- copy strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         ft_vstrcpy(const char *dest, int strs, ...);
**
**    PARAMETERS
**
**         const char *dest    Destination string to which we will copy in.
**
**         int strs            Numbers of strings passed as additional
**                             arguments.
**
**         ...                 (Additional arguments); strings to be
**                             copied into 'dest'.
**
**    DESCRIPTION
**         Copies all 'strs' strings from the additional arguments into
**         'dest'.
**
**         'dest' should have enough allocated space to fit all strings
**         copied into it.
**
**    RETURN VALUES
**         Returns the string 'dest' with all the strings in additional
**         arguments copied into it; otherwise NULL.
*/

#include "../Includes/string_42.h"
#include <stdarg.h>

char			*ft_vstrcpy(char *dest, int strs, ...)
{
	va_list		ap;
	int			i;

	va_start(ap, strs);
	(*dest) = '\0';
	i = 0;
	while (i < strs)
	{
		ft_strcat(dest, va_arg(ap, char *));
		++i;
	}
	va_end(ap);
	return ((char *)dest);
}
