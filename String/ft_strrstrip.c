/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstrip.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:42:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:42:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

char		*ft_strrstrip(char const *s, char *charset)
{
	int		last;
	char	*rstripped;

	if (s)
	{
		last = ft_strlen(s) - 1;
		while (last >= 0 && ft_ischarset(s[last], charset))
			--last;
		rstripped = ft_strndup(s, last + 1);
		free((void *)s);
		return (rstripped);
	}
	return (NULL);
}
