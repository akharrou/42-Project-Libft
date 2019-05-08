/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:42:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 08:49:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'dprintf()' function.
*/

int				ft_dprintf(int filedes, const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	return (ft_vdprintf(filedes, format, &args));
}
