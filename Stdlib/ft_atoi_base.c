/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:28:01 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/30 09:24:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/macros_42.h"

static int		ft_found_(const char *s, int c)
{
	if ((unsigned char)c == '-')
		return (1);
	while (*s)
		if (*s++ == (unsigned char)c)
			return (1);
	if (*s == (unsigned char)c)
		return (1);
	return (0);
}

static int		ft_strchrs_(char *str, char *substr)
{
	while (*substr)
		if (!ft_found_(str, *substr++))
			return (0);
	return (1);
}

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

static int		ft_valid_input(char *str, char *base)
{
	short	i;
	short	j;
	short	count;

	if (!base || !base[0] || !base[1] || !ft_strchrs_(base, str))
		return (0);
	i = -1;
	while (base[++i])
	{
		count = 0;
		if (!ISPRINT(base[i]))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = -1;
		while (base[++j])
			if (base[i] == base[j])
				count++;
		if (count > 1)
			return (0);
	}
	return (1);
}

int				ft_atoi_base(char *str, char *base)
{
	short	i;
	short	sign;
	short	index;
	short	base_len;
	long	val;

	if (!str || !ft_valid_input(str, base))
		return (0);
	base_len = ft_strlen(base);
	i = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	sign = (str[i] == '-') ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
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
