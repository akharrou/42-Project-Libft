/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_addr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 17:45:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/17 18:35:40 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

void	ft_memset_addr(void **buf, int c, size_t len)
{
	size_t i;

	i = 0;
	while (len > i)
		(*(char **)buf)[i++] = (unsigned char)c;
}
