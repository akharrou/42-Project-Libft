/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isany.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:18:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 10:31:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_str_isany -- search for a string in a series of strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_str_isany(const char *s1, int strings, ...);
**
**    PARAMETERS
**
**         const char *s1       String to look for in the series
**                              of strings.
**
**         int strings          Number of strings provided.
**
**         ...                  Series of strings in which to look for
**                              's1'.
**
**    DESCRIPTION
**         Iterates through every string in the series of strings provided
**         looking for 's1'.
**
**    RETURN VALUES
**         If 's1' is found, returns 1; otherwise 0.
*/

#include "../Includes/string_42.h"
#include <stdarg.h>

int			ft_str_isany(const char *s1, int strings, ...)
{
	va_list	ap;
	char	*s2;

	va_start(ap, strings);
	while (strings-- > 0)
	{
		s2 = va_arg(ap, char *);
		if (ft_strcmp(s1, s2) == 0)
			return (1);
	}
	va_end(ap);
	return (0);
}
