/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbyte_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:59:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../Includes/stdio_42.h"
#include "../Includes/ctype_42.h"

void	ft_putbyte_fd(int c, int fd)
{
	if (!ISPRINT(c))
	{
		write(fd, "\\", 1);
		if (c <= '\xf')
			write(fd, "0", 1);
		ft_putnbr_base_fd((unsigned char)c, "0123456789abcdef", fd);
	}
	else
		write(fd, &c, 1);
}
