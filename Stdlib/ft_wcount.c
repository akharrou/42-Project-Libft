/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:14:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"

int		ft_wcount(const char *s, const char *charset)
{
	int		i;
	int		word_count;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		while (s[i] && ft_ischarset(s[i], charset))
			i++;
		while (s[i] && !ft_ischarset(s[i], charset))
			i++;
		word_count++;
		while (s[i] && ft_ischarset(s[i], charset))
			i++;
	}
	return (word_count);
}
