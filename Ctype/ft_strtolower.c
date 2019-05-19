/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:31:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:39:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"

char	*ft_strtolower(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (ISUPPER(str[i]))
				str[i] = ft_tolower(str[i]);
			++i;
		}
	}
	return ((char *)str);
}
