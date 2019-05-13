/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 09:20:56 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/12 09:46:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

void	ft_astrcpy(char **dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (*src)
		(*dst)[i++] = *src++;
	(*dst)[i] = *src;
}

void	ft_astrcpyfre(char **dst, const char *src, int free_src)
{
	ft_astrcpy(dst, src);
	if (free_src && src)
		free((char *)src);
}
