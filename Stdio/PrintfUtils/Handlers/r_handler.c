/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:51:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:35:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         r_handler -- formatted non-printable string conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         r_handler(t_format format, t_data arg);
**
**    PARAMETERS
**
**         t_format format     Structure containing information about how
**                             the argument must be formatted in the string.
**
**         t_data arg          Argument pulled off of the 'va_list'.
**
**    DESCRIPTION
**         Handles the '%r' specifier; prints a string of non-printable
**         characters in their hexadecimal representation.
**
**         Note: the flags and fields that apply to this specifier are
**         the following:
**
**             Flags: '-'
**             Width: defined or '*'
**             Precision: defined or '*'
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise NULL.
*/

#include "../../../Includes/stdlib_42.h"
#include "../../../Includes/string_42.h"
#include "../../../Includes/macros_42.h"
#include "../../../Includes/ctype_42.h"
#include "../../../Includes/ft_printf.h"

char			*r_handler(t_format format, t_data arg)
{
	char		*fstr;
	char		*tmp;
	int32_t		i;

	tmp = (arg.str_ == NULL) ?
		ft_strdup("(null)") :
		ft_strdup(arg.str_);
	if (format.precision != NONE)
		if (0 <= format.precision && format.precision < (long)ft_strlen(tmp))
			tmp[format.precision] = '\0';
	i = -1;
	fstr = NULL;
	if (arg.str_ != NULL)
		while (tmp[++i])
			fstr = (ISPRINT(tmp[i])) ?
				ft_strappend(fstr, ft_strndup(tmp + i, 1), 1, 1) :
				ft_strappend(fstr, ft_strprepend(
						ft_itoa_base(tmp[i], HEX_LOWER_BASE, 2), "\\x", 1, 0),
					1, 1);
	else
		fstr = tmp;
	format.width -= ft_strlen(fstr);
	if (format.width > 0 && format.pad == ' ')
		fstr = apply_width(format, fstr);
	return (fstr);
}
