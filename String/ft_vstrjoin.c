/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:50:28 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 14:21:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_vstrjoin -- join multiple strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char *
**         ft_vstrjoin(char *str, int n, ...);
**
**    PARAMETERS
**
**         char *str             String to which will be joined all the
**                               strings passed as additional arguments.
**
**         int n                 Number of strings passed as additional
**                               arguments to join to 'str'.
**
**         ...                   (Additional arguments); strings to be
**                               joined to 'str'.
**
**    DESCRIPTION
**         Joins to the end of 'str', 'n' strings, given as additional
**         arguments.
**
**    RETURN VALUES
**         Returns the joined string created; otherwise NULL if any error
**         occured.
*/

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/stdint_42.h"

char		*ft_vstrjoin(char *str, int n, ...)
{
	va_list	ap;
	int		i;

	if (str)
	{
		str = ft_strdup(str);
		if (!str)
			return (NULL);
	}
	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		str = ft_strjoinfre(str, va_arg(ap, char *), 1, 0);
		if (!str)
			break ;
		++i;
	}
	va_end(ap);
	return (str);
}

/*
**    NAME
**         ft_vstrjoinfre -- join multiple strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char *
**         ft_vstrjoinfre(char *str, int n, ...);
**
**    PARAMETERS
**
**         char *str             String to which will be joined all the
**                               strings passed as additional arguments.
**
**         int n                 Number of strings passed as additional
**                               arguments to join to 'str'.
**
**         ...                   (Additional arguments); strings to be
**                               joined to 'str'.
**
**    DESCRIPTION
**         Joins to the end of 'str', 'n' strings, given as additional
**         arguments.
**
**         Free's the original string 'str'.
**
**         In the additional arguments, every string is expected to be
**         followed by a boolean (int), i.e either 1 or 0, indicating
**         whether or not the string should be free'd or left untouched.
**
**         Example:
**
**      ft_vstrjoinfre("this string", 0, 2, ft_strdup("hello"), 1, "bye !", 0);
**
**    RETURN VALUES
**         Returns the joined string created; otherwise NULL if any error
**         occured.
*/

char		*ft_vstrjoinfre(char *str, int free_str, int n, ...)
{
	va_list	ap;
	char	*tmpstr;
	int		free_arg;
	int		i;

	if (str)
	{
		str = ft_strjoinfre(str, "", free_str, 0);
		if (!str)
			return (NULL);
	}
	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		tmpstr = va_arg(ap, char *);
		free_arg = va_arg(ap, int);
		str = ft_strjoinfre(str, tmpstr, 1, free_arg);
		if (!str)
			break ;
		++i;
	}
	va_end(ap);
	return (str);
}
