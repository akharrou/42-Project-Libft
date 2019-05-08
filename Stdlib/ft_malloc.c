/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:21:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/01 19:14:16 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

void	*ft_malloc(size_t size, char c)
{
	void	*buf;
	size_t	i;

	buf = (void *)malloc(size);
	if (!buf)
		return (NULL);
	i = 0;
	while (size > i)
		((char *)buf)[i++] = c;
	return (buf);
}
