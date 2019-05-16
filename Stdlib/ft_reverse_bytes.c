/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_bytes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 14:41:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/14 18:16:36 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdint_42.h"

void		*ft_reverse_bytes(void *data, size_t size)
{
	int8_t	*bytestr;
	int8_t	tmp;
	int		i;
	int		j;

	bytestr = (int8_t *)(data);
	i = -1;
	j = size;
	while (++i < --j)
	{
		tmp = bytestr[i];
		bytestr[i] = bytestr[j];
		bytestr[j] = tmp;
	}
	return (data);
}
