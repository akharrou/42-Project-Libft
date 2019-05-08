/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 10:45:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 16:25:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"

static int		ft_ischarset_v2(char c, char *charset, short *index)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
		(*index)++;
	}
	return (0);
}

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

static char		*ft_itoa_base_(long nbr, char *base, short base_len, char *buf)
{
	short	i;
	int		quotient;
	long	col;

	i = 0;
	col = base_len;
	if (nbr < 0)
		buf[i++] = '-';
	if (nbr < 0)
		nbr = -nbr;
	while (col <= nbr)
		col *= base_len;
	while (col > 1)
	{
		col /= base_len;
		(quotient = nbr / col);
		buf[i++] = base[quotient];
		nbr -= (quotient * col);
	}
	buf[i] = '\0';
	return (buf);
}

static int		ft_atoi_base_(char *str, char *base, short base_len)
{
	short	i;
	short	sign;
	short	index;
	long	val;

	i = 0;
	sign = 1;
	if ((str[i] == '+' || str[i] == '-') &&
		ft_ischarset_v2(str[i + 1], base, &index))
		if (str[i++] == '-')
			sign = -1;
	val = 0;
	index = 0;
	while (str[i] && ft_ischarset_v2(str[i++], base, &index))
	{
		if (val > INT_MAX || val < INT_MIN)
			return (0);
		val = (val * base_len) + (index);
		index = 0;
	}
	return (sign * val);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	short	i;
	short	b_from_len;
	short	b_to_len;
	char	*buf;

	b_from_len = ft_strlen(base_from);
	b_to_len = ft_strlen(base_to);
	if (!nbr || !base_from || !base_to || !(buf = malloc(34)) ||
		b_from_len < 1 || b_to_len < 1 ||
		!(ft_validate_base_system(base_from)) ||
		!(ft_validate_base_system(base_to)))
	{
		return (0);
	}
	i = 0;
	while ((nbr[i] >= '\a' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	return (ft_itoa_base_(ft_atoi_base_(nbr + i, base_from, b_from_len),
							base_to,
							b_to_len,
							buf));
}
