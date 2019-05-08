/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vasprintf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:34:20 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:07:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'vasprintf()' function.
*/

int				ft_vasprintf(char **ret, const char *format, va_list *args)
{
	int32_t		tt_bytes;
	size_t		len;

	if (!ret || !format)
		return (0);
	if (!((*ret) = ft_strdup("")))
		return (-1);
	tt_bytes = 0;
	while (*format)
	{
		if (*format == '%')
		{
			*ret = ft_strnappend(*ret, formatter(&format, args, &len), len, 3);
			tt_bytes += len;
		}
		else
		{
			*ret = ft_strnappend(*ret, &(*format++), 1, 1);
			++tt_bytes;
		}
		if (!(*ret))
			return (-1);
	}
	va_end(*args);
	return (tt_bytes);
}
