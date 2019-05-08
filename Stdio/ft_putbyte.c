/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbyte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:47:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../Includes/stdio_42.h"
#include "../Includes/ctype_42.h"

void	ft_putbyte(int c)
{
	if (!ISPRINT(c))
	{
		write(1, "\\", 1);
		if (c <= '\xf')
			write(1, "0", 1);
		ft_putnbr_base((unsigned char)c, "0123456789abcdef");
	}
	else
		write(1, &c, 1);
}
