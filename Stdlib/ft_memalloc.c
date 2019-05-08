/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 07:21:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/01 16:44:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

void	*ft_memalloc(size_t size)
{
	void	*buf;

	if (!(buf = (void *)malloc(size)))
		return (NULL);
	ft_memset(buf, 0, size);
	return (buf);
}
