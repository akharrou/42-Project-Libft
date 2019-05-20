/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 20:05:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

static int	ft_wct(const char *s, unsigned char c)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == (unsigned char)c)
			i++;
		if (s[i] && s[i] != (unsigned char)c)
			word_count++;
		while (s[i] && s[i] != (unsigned char)c)
			i++;
	}
	return (word_count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		wcount;
	char	**strtab;

	if (!s)
		return (NULL);
	wcount = ft_wct(s, c);
	if (!(strtab = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (k < wcount)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (!(strtab[k++] = ft_strdup_range(s, j, i)))
			return (NULL);
	}
	strtab[k] = NULL;
	return (strtab);
}
