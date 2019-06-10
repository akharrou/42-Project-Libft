/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:25:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/09 22:47:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/ctype_42.h"

static int	ft_wct(const char *s, const char *charset)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && ft_ischarset(s[i], charset))
			i++;
		if (s[i] && !ft_ischarset(s[i], charset))
			word_count++;
		while (s[i] && !ft_ischarset(s[i], charset))
			i++;
	}
	return (word_count);
}

char		**ft_strsplit(char const *s, const char *charset)
{
	int		i;
	int		j;
	int		k;
	int		wcount;
	char	**strtab;

	if (!s)
		return (NULL);
	wcount = ft_wct(s, charset);
	if (!(strtab = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (k < wcount)
	{
		while (ft_ischarset(s[i], charset))
			i++;
		j = i;
		while (s[i] && !ft_ischarset(s[i], charset))
			i++;
		if (!(strtab[k++] = ft_strdup_range(s, j, i)))
			return (NULL);
	}
	strtab[k] = NULL;
	return (strtab);
}

void		freestrtab(char ***strtab)
{
	size_t	i;

	i = 0;
	while ((*strtab)[i])
		free((*strtab)[i++]);
	free(*strtab);
	(*strtab) = NULL;
	return ;
}
