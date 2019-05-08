/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:29:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:10:48 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/stdlib_42.h"
#include "../../Includes/ctype_42.h"
#include "../../Includes/ft_printf.h"

/*
**    NAME
**         parse_flags -- parse 'flags' field in the 'printf' format string
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int8_t
**         parse_flags(const char *format, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Format string.
**
**         int8_t *i               Index to start parsing from in the
**                                 format string.
**
**    DESCRIPTION
**         Parses for the 'flags' field in the 'printf' format string.
**
**    RETURN VALUES
**         Returns a mask representing the specified flags.
*/

int8_t			parse_flags(const char *format, int8_t *i)
{
	int8_t		flags;

	flags = 0;
	while (format[*i])
	{
		if (format[*i] == '+')
			flags |= PLUS;
		else if (format[*i] == '-')
			flags |= MINUS;
		else if (format[*i] == ' ')
			flags |= SPACE;
		else if (format[*i] == '#')
			flags |= HASH;
		else if (format[*i] == '0')
			flags |= ZERO;
		else
			break ;
		++(*i);
	}
	return (flags);
}

/*
**    NAME
**         parse_width -- parse 'width' field in the 'printf' format string
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int32_t
**         parse_width(const char *format, va_list *args, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Format string.
**
**         va_list *args           Variable argument list.
**
**         int8_t *i               Index to start parsing from in the
**                                 format string.
**
**    DESCRIPTION
**         Parses for the 'width' field in the 'printf' format string.
**
**    RETURN VALUES
**         Returns a signed 8 bit integer representing the width
**         specified.
*/

int32_t			parse_width(const char *format, va_list *args, int8_t *i)
{
	int32_t		width;

	if (format[*i] == '*')
	{
		width = va_arg(*args, int32_t);
		++(*i);
	}
	else
	{
		width = ft_atoi(format + (*i));
		if (width)
			(*i) += ft_intlen(width);
	}
	return (width);
}

/*
**    NAME
**         parse_precison -- parse the 'precision' field in the 'printf'
**                           format string.
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int32_t
**         parse_precison(const char *format, va_list *args, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Format string.
**
**         va_list *args           Variable argument list.
**
**         int8_t *i               Index to start parsing from in the
**                                 format string.
**
**    DESCRIPTION
**         Parses for the 'precision' field in the 'printf' format string.
**
**    RETURN VALUES
**         Returns a signed 8 bit integer representing the precision
**         specified or NONE (expands to -1) to indicate that no
**         precision was specified.
*/

int32_t			parse_precison(const char *format, va_list *args, int8_t *i)
{
	int32_t		precision;

	if (format[*i] == '.')
	{
		++(*i);
		if (format[*i] == '*')
		{
			precision = va_arg(*args, int32_t);
			++(*i);
		}
		else
		{
			while (format[*i] == '0')
				++(*i);
			precision = ft_atoi(format + (*i));
			if (precision)
				(*i) += ft_intlen(precision);
		}
		return (precision);
	}
	return (NONE);
}

/*
**    NAME
**         parse_length -- parse the 'length' field in the 'printf'
**                         format string
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int8_t
**         parse_length(const char *format, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Format string.
**
**         int8_t *i               Index to start parsing from in the
**                                 format string.
**
**    DESCRIPTION
**         Parses for the 'length' field in the 'printf' format string.
**
**    RETURN VALUES
**         Returns a signed 8 bit integer representing the specified
**         length or NONE (expands to -1) to indicate that the default
**         should be use.
*/

int8_t			parse_length(const char *format, int8_t *i)
{
	(*i) += 2;
	if (format[(*i) - 2] == 'h' && format[(*i) - 1] == 'h')
		return (HH);
	else if (format[(*i) - 2] == 'l' && format[(*i) - 1] == 'l')
		return (LL);
	(*i) -= 1;
	if (format[(*i) - 1] == 'h')
		return (H);
	else if (format[(*i) - 1] == 'l')
		return (L);
	else if (format[(*i) - 1] == 'L')
		return (LLL);
	else if (format[(*i) - 1] == 'j')
		return (IU_MAX);
	else if (format[(*i) - 1] == 'z')
		return (SIZET);
	else if (format[(*i) - 1] == 't')
		return (PTRDIFF);
	(*i) -= 1;
	return (NONE);
}

/*
**    NAME
**         parse_specifier -- parse the 'specifier' field in the 'printf'
**                            format string
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int8_t
**         parse_specifier(const char *format, int8_t *i);
**
**    PARAMETERS
**
**         const char *format      Format string.
**
**         int8_t *i               Index to start parsing from in the
**                                 format string.
**
**    DESCRIPTION
**         Parses for the 'specifier' field in the 'printf' format string.
**
**    RETURN VALUES
**         Returns the obtained specifier (as an 8 bit integer) or NONE
**         (expands to -1) to indicate that no valid specifier was
**         specified.
*/

int8_t			parse_specifier(const char *format, int8_t *i)
{
	if (ft_ischarset(format[*i], SPECIFIERS))
	{
		++(*i);
		return (format[(*i) - 1]);
	}
	return (NONE);
}
