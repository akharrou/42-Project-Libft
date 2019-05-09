/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrsets.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:32:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/09 12:39:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include <stdarg.h>

int		ft_isstrsets(char *str, int sets, ...)
{
	va_list		args;
	const char	**strset;
	int			verdict;
	int			i;

	verdict = 0;
	if (str)
	{
		va_start(args, sets);
		i = 0;
		while (sets > i)
		{
			strset = va_arg(args, const char **);
			if (ft_isstrset(str, strset))
			{
				verdict = 1;
				break ;
			}
			++i;
		}
		va_end(args);
	}
	return (verdict);
}
