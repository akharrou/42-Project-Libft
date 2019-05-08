/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:02:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/02 15:17:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	if (s2)
	{
		i = ft_strlen(s1);
		j = 0;
		while (s2[j])
			s1[i++] = s2[j++];
		s1[i] = '\0';
	}
	return (s1);
}

char	*ft_strcatfre(char *s1, const char *s2, int free_s1, int free_s2)
{
	char	*ret;

	ret = ft_strcat(s1, s2);
	if (free_s1 && s1)
		free((void *)s1);
	if (free_s2 && s2)
		free((void *)s2);
	return (ret);
}
