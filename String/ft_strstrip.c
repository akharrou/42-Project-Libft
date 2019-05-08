/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:57:14 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/30 11:05:54 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strstrip(char const *s, char *charset)
{
	int		last;
	int		first;
	char	*stripped;

	if (s)
	{
		first = 0;
		while (s[first] && ft_ischarset(s[first], charset))
			++first;
		last = ft_strlen(s) - 1;
		while (last >= 0 && ft_ischarset(s[last], charset))
			--last;
		stripped = ft_strndup(s + first, (last + 1) - first);
		free((void *)s);
		return (stripped);
	}
	return (NULL);
}
