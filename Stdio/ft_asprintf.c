/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_asprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:43:29 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 08:49:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'asprintf()' function.
*/

int				ft_asprintf(char **ret, const char *format, ...)
{
	va_list		args;

	va_start(args, format);
	return (ft_vasprintf(ret, format, &args));
}
