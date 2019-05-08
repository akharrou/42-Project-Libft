/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrstrip.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:57:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/03 00:13:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strnrstrip(char const *s, char *charset, int n)
{
	int		last;
	char	*rstripped;

	if (s)
	{
		last = ft_strlen(s) - 1;
		while (n-- && last >= 0 && ft_ischarset(s[last], charset))
			--last;
		rstripped = ft_strndup(s, last + 1);
		free((void *)s);
		return (rstripped);
	}
	return (NULL);
}
