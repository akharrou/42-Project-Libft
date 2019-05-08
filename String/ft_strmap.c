/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:23:33 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*new_str;

	if (s && *f)
	{
		if (!(new_str = (char *)malloc(ft_strlen(s) + 1)))
			return (NULL);
		i = -1;
		while (s[++i])
			new_str[i] = (*f)(s[i]);
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}
