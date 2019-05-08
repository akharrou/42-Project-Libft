/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 17:08:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_occurence;

	last_occurence = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_occurence = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	else
		return (last_occurence);
}
