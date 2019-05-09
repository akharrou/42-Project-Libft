/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 10:42:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/09 10:45:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"

int			ft_isstrset(const char *str, const char **strtab)
{
	int8_t	i;

	if (strtab && str)
	{
		i = -1;
		while (strtab[++i])
			if (ft_strcmp(strtab[i], str) == 0)
				return (1);
	}
	return (0);
}
