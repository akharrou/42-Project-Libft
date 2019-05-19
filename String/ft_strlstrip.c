/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:41:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:41:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strlstrip(char const *s, char *charset)
{
	int		first;
	char	*lstripped;

	if (s)
	{
		first = 0;
		while (s[first] && ft_ischarset(s[first], charset))
			++first;
		lstripped = ft_strdup(s + first);
		free((void *)s);
		return (lstripped);
	}
	return (NULL);
}
