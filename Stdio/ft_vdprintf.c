/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:41:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/07/29 01:07:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/stdio_42.h"
#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'vdprintf()' function.
*/

int				ft_vdprintf(int filedes, const char *format, va_list *args)
{
	int32_t		tt_bytes;
	char		*fstr;
	size_t		len;
	size_t		i;

	if (!format)
		return (0);
	tt_bytes = 0;
	while (*format != '\0')
	{
		i = 0;
		while (format[i] != '\0' && format[i] != '%')
			++i;
		tt_bytes += write(filedes, format, i);
		format += i;
		if (*format == '%')
		{
			if (!(fstr = formatter(&format, args, &len)))
				return (-1);
			tt_bytes += write(filedes, fstr, len);
			free(fstr);
		}
	}
	va_end(*args);
	return (tt_bytes);
}
