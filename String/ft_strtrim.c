/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/30 11:05:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char	*ft_strtrim(char const *s, unsigned char c)
{
	int		last;
	int		first;
	char	*trimmed;

	if (s)
	{
		first = 0;
		while (s[first] && c == s[first])
			++first;
		last = ft_strlen(s) - 1;
		while (last > 0 && c == s[last])
			--last;
		trimmed = ft_strndup(s + first, last - first);
		free((void *)s);
		return (trimmed);
	}
	return (NULL);
}
