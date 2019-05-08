/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/26 23:38:01 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strnjoin(char const *s1, char const *s2, size_t len)
{
	char	*new_str;
	size_t	s1_len;
	size_t	src_len;

	if (len < 1 && (!s1 && !s2))
		return (NULL);
	s1_len = ft_strlen(s1);
	src_len = ft_strlen(s2);
	if (len > s1_len + src_len)
		len = s1_len + src_len;
	if (!(new_str = malloc(len + 1)))
		return (NULL);
	ft_bzero(new_str, len);
	new_str = ft_strncat(new_str, s1, len);
	if (len - s1_len > 0)
		new_str = ft_strncat(new_str, s2, len - s1_len);
	return (new_str);
}
