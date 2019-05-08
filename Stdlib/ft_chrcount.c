/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:14:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/15 04:41:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_chrcount(const char *s, const char c)
{
	int	char_count;

	char_count = 0;
	if (s)
		while (*s)
			if (*s++ == c)
				++char_count;
	return (char_count);
}
