/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 10:42:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/09 12:35:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"

int			ft_isstrset(const char *str, const char **strset)
{
	int8_t	i;

	if (strset && str)
	{
		i = -1;
		while (strset[++i])
			if (ft_strcmp(strset[i], str) == 0)
				return (1);
	}
	return (0);
}
