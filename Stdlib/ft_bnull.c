/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bnull.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:09:49 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 10:10:17 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

void		ft_bnull(void **array, size_t n)
{
	size_t	i;

	if (array && n > 0)
	{
		i = 0;
		while (i < n)
			array[i++] = NULL;
	}
	return ;
}
