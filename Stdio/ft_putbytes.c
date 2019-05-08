/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbytes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:22:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdio_42.h"
#include "../Includes/ctype_42.h"

void	ft_putbytes(const char *byte_str)
{
	while (*byte_str)
	{
		if (!ISPRINT(*byte_str))
		{
			ft_putchar('\\');
			if (*byte_str <= '\xf')
				ft_putchar('0');
			ft_putnbr_base(*byte_str++, "0123456789abcdef");
		}
		else
			ft_putchar(*byte_str++);
	}
}
