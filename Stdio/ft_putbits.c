/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 10:07:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 10:49:17 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_putbits -- print bit representation of some data
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         ft_putbits(void *data, size_t size);
**
**    PARAMETERS
**
**         void *data       Pointer to some data.
**
**         size_t size      Size of the data.
**
**    DESCRIPTION
**         Prints to standard out the bits of the pointed to data.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/stdio_42.h"
#include "../Includes/stdint_42.h"

void		ft_putbits(void *data, size_t size)
{
	uint8_t	*bytestr;
	uint8_t	bit;
	size_t	i;
	size_t	j;
	size_t	k;

	bytestr = (uint8_t *)(data);
	i = 0;
	k = size - 1;
	while (i < size)
	{
		j = 0;
		while (j < 8)
		{
			bit = (uint8_t)(bytestr[k] & (1 << (7 - j)));
			ft_putchar(((bit) ? '1' : '0'));
			++j;
		}
		--k;
		++i;
		if (i < size)
			ft_putchar(' ');
	}
	return ;
}
