/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:43:35 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

/*
** Algorithm produced by Professor Daniel J. Bernstein.
** All rights reserved.
*/

unsigned int	ft_hash(const char *str)
{
	unsigned int i;
	unsigned int hash;
	unsigned int length;

	i = 0;
	hash = 5381;
	length = ft_strlen(str);
	while (i < length)
	{
		hash = ((hash << 5) + hash) + (*str);
		++str;
		++i;
	}
	return (hash);
}
