/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 10:37:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 10:38:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include <stdarg.h>

char 	**ft_strtabnew(int size, ...)
{
	char		**strtab;
	va_list		args;
	int32_t		i;

	strtab = NULL;
	if (size > 0)
	{
		strtab = (char **)malloc(sizeof(char *) * (size + 1));
		if (strtab)
		{
			va_start(args, size);
			i = -1;
			while (++i < size)
				strtab[i] = ft_strdup(va_arg(args, char *));
			strtab[i] = NULL;
			va_end(args);
		}
	}
	return (strtab);
}
