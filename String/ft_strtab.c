/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:27:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 16:44:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_strtab -- create a null terminated string table
**                      (array) from given strings
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char **
**         ft_strtab(int size, ...);
**
**    PARAMETERS
**
**         int size        Number of strings passed in as
**                         arguments.
**
**         ...             Strings to include in the string
**                         array.
**
**    DESCRIPTION
**         Creates an array of strings of size 'size' and
**         fills it with the strings provided as additional
**         arguments.
**
**    RETURN VALUES
**         If successful returns a pointer to the string
**         table (array); otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include <stdarg.h>

char			**ft_strtab(int size, ...)
{
	char		**strtab;
	va_list		args;
	int			i;

	strtab = NULL;
	if (size > 0)
	{
		strtab = (char **)malloc(sizeof(char *) * (size + 1));
		if (strtab)
		{
			va_start(args, size);
			i = -1;
			while (++i < size)
				strtab[i] = ft_strdup(va_arg(args, char *));
			strtab[i] = NULL;
			va_end(args);
		}
	}
	return (strtab);
}
