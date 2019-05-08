/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:02:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/26 23:32:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] && n-- > 0)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
