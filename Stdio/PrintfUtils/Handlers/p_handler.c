/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_handler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:52:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:34:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         p_handler -- formatted memory address conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         p_handler(t_format format, t_data arg);
**
**    PARAMETERS
**
**         t_format format     Structure containing information about how
**                             the argument must be formatted in the string.
**
**         t_data arg          Argument pulled off of the 'va_list'.
**
**    DESCRIPTION
**         Handles the '%p' specifier like the libc 'printf()' function.
**
**         Note: the flags and fields that apply to this specifier are
**         the following:
**
**             Flags: '-', '0'
**             Width: defined or '*'
**
**    RETURN VALUES
**         If successful, returns a formatted string that follows the
**         specified format; otherwise NULL.
*/

#include "../../../Includes/stdlib_42.h"
#include "../../../Includes/string_42.h"
#include "../../../Includes/macros_42.h"
#include "../../../Includes/ft_printf.h"

char			*p_handler(t_format format, t_data arg)
{
	char		*addr;

	addr = ft_strdup("");
	if (!(format.precision == 0 && arg.intptr_ == 0))
	{
		addr = ft_strappend(addr,
			ft_utoa_base(arg.intptr_, HEX_LOWER_BASE, format.precision), 1, 1);
	}
	if (format.width && format.pad == '0')
		addr = apply_width(format, addr);
	addr = ft_strprepend(addr, "0x", 1, 0);
	format.width -= ft_strlen(addr);
	if (format.width > 0 && format.pad == ' ')
		addr = apply_width(format, addr);
	return (addr);
}
