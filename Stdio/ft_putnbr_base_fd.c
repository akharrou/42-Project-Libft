/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:31:02 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdio_42.h"
#include "../Includes/string_42.h"

static int		ft_validate_base_system(char *base_str)
{
	short	i;
	short	j;
	short	count;

	if (!base_str || !base_str[0] || !base_str[1])
		return (0);
	i = -1;
	while (base_str[++i])
	{
		count = 0;
		if (!ISPRINT(base_str[i]))
			return (0);
		if (base_str[i] == '+' || base_str[i] == '-')
			return (0);
		j = -1;
		while (base_str[++j])
			if (base_str[i] == base_str[j])
				count++;
		if (count > 1)
			return (0);
	}
	return (1);
}

static void		ft_putnbr_base_util_fd(long nbr, char *base, int fd)
{
	int		quotient;
	long	col;
	short	i;
	short	base_sys;

	if (!ft_validate_base_system(base))
		return ;
	i = 0;
	col = ft_strlen(base);
	base_sys = col;
	if (nbr < 0)
		ft_putchar_fd('-', fd);
	if (nbr < 0)
		nbr = -nbr;
	while (col <= nbr)
		col *= base_sys;
	while (col > 1)
	{
		col /= base_sys;
		quotient = (nbr / col);
		ft_putchar_fd(base[quotient], fd);
		nbr -= (quotient * col);
	}
}

void			ft_putnbr_base_fd(int nbr, char *base, int fd)
{
	ft_putnbr_base_util_fd((long)nbr, base, fd);
	return ;
}
