/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 10:07:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/18 10:31:25 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_putbits -- print integer in its bit form
**
**    SYNOPSIS
**         #include "stdio_42.h"
**
**         void
**         ft_putbits(unsigned long long num, int n_bits);
**
**    PARAMETERS
**
**         unsigned long long num     TODO
**
**         int n_bits                 TODO
**
**    DESCRIPTION
**         TODO.
**
**    RETURN VALUES
**         TODO.
*/

#include "../Includes/stdio_42.h"
#include "../Includes/math_42.h"

void	ft_putbits(unsigned long long num, int n_bits)
{
	unsigned long long	temp;
	int					i;

	i = 0;
	temp = ft_powll(2, n_bits - 1);
	while (i < n_bits)
	{
		ft_putchar(((num & temp) == 0) ? '0' : '1');
		if ((++i % 4) == 0)
			ft_putchar(' ');
		num = num << 1;
	}
	ft_putchar('\n');
}
