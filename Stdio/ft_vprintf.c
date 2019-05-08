/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:40:57 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 09:08:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/macros_42.h"
#include "../Includes/ft_printf.h"

/*
** Reproduction of the libc 'vprintf()' function.
*/

int		ft_vprintf(const char *format, va_list *args)
{
	return (ft_vdprintf(STDOUT, format, args));
}
