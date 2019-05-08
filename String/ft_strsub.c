/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 16:08:55 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/01 16:08:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	if (s)
		return (ft_strdup_range(s, start, start + len));
	return (NULL);
}
