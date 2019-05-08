/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:34:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         c_handler -- formatted character conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         c_handler(t_format format, t_data arg);
**
**    PARAMETERS
**
**         t_format format     Structure containing information about how
**                             the argument must be formatted in the string.
**
**         t_data arg          Argument pulled off of the 'va_list'.
**
**    DESCRIPTION
**         Handles the '%c' specifier like the libc 'printf()' function.
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise NULL.
*/

#include "../../../Includes/stdlib_42.h"
#include "../../../Includes/string_42.h"
#include "../../../Includes/ft_printf.h"

#define CHARACTER 1
#define SENTINAL 1

char			*c_handler(t_format format, t_data arg)
{
	char		*charstr;
	size_t		len;

	if (format.width)
		format.width -= CHARACTER;
	len = CHARACTER + format.width;
	charstr = malloc(len + SENTINAL);
	if (!charstr)
		exit(-1);
	if (!format.width || (format.width && format.flags & MINUS))
		charstr[0] = arg.char_;
	else
		charstr[format.width] = arg.char_;
	charstr[len] = '\0';
	if (format.width)
		(format.flags & MINUS) ?
			ft_memset(charstr + 1, format.pad, format.width) :
			ft_memset(charstr, format.pad, format.width);
	return (charstr);
}
