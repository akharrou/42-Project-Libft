/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 18:59:14 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/09 22:47:39 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_vstrncpy -- copy strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         ft_vstrncpy(const char *dest, int n, ...);
**
**    PARAMETERS
**
**         const char *dest    Destination string to which we will copy in.
**
**         int n               Max characters to copy.
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
**         'dest' should have enough allocated space to fit at 'n'
**         characters.
**
**         ft_vstrncpy() will copy only up to 'n' characters into 'dest'.
**
**    RETURN VALUES
**         Returns the string 'dest' with all the strings in additional
**         arguments copied into it or with at most having copied 'n'
**         characters; otherwise NULL.
*/

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"
#include <stdarg.h>

char			*ft_vstrncpy(char *dest, int n, int strs, ...)
{
	va_list		ap;
	char		*tmpstr;
	size_t		len;
	int			i;

	va_start(ap, strs);
	ft_bzero(dest, n);
	i = 0;
	while (i < strs)
	{
		tmpstr = va_arg(ap, char *);
		len = ft_strlen(tmpstr);
		ft_strncat(dest, tmpstr, n);
		n -= len;
		++i;
	}
	va_end(ap);
	return ((char *)dest);
}
