/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 09:20:30 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/12 09:20:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

void	ft_astrncpy(char **dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && *src)
		(*dst)[i++] = *src++;
	while (i < len)
		(*dst)[i++] = '\0';
}
