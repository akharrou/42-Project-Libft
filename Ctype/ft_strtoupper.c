/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:30:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:39:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"

char	*ft_strtoupper(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (ISLOWER(str[i]))
				str[i] = ft_toupper(str[i]);
			++i;
		}
	}
	return ((char *)str);
}
