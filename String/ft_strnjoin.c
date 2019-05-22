/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 17:17:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (len < 1 && (!s1 && !s2))
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strnlen(s2, len);
	if (len > s1_len + s2_len)
		len = s1_len + s2_len;
	if (!(new_str = (char *)ft_malloc(s1_len + len + 1, '\0')))
		return (NULL);
	return (ft_strncat(ft_strcat(new_str, s1), s2, len));
}

char		*ft_strnjoinfre(char const *s1, char const *s2, size_t len,
				int free_str)
{
	char	*new_str;

	new_str = ft_strnjoin(s1, s2, len);
	if (free_str & 1 && s1)
		free((void *)s1);
	if (free_str & 2 && s2)
		free((void *)s2);
	return (new_str);
}
