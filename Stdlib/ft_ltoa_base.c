/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 06:28:59 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/18 20:37:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char	*ft_ltoa_base(long n, char *base, int precision)
{
	unsigned short	intbase;
	unsigned short	col;
	unsigned long	val;
	char			*buf;

	if (!valid_base(base))
		return (NULL);
	col = ft_intmaxlen_base(n, ft_strlen(base)) + (n < 0);
	precision = (precision - col > 0) ? precision - col : 0;
	col += precision;
	if (!(buf = malloc(col + 1)))
		return (NULL);
	buf = ft_memset(buf, '0', col);
	buf[col] = '\0';
	intbase = ft_strlen(base);
	val = (n < 0) ? -n : n;
	while (col - precision > 0)
	{
		buf[--col] = base[val % intbase];
		val /= intbase;
	}
	if (n < 0)
		(*buf) = '-';
	return (buf);
}
