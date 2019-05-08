/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:17:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:01:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/macros_42.h"
#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'printf()' function.
*/

int				ft_printf(const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	return (ft_vdprintf(STDOUT, format, &args));
}
