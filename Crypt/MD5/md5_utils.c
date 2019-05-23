/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 13:50:22 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 09:41:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_md5.h"

/*
**    DESCRIPTION
**         Denotes one MD5 transformation operation.
*/

void	md5_operation(t_md5ctx *ctx, uint32_t i, uint32_t *f, uint32_t *g)
{
	if (MD5_ROUND_1)
	{
		(*f) = MD5_F(B, C, D);
		(*g) = i;
	}
	else if (MD5_ROUND_2)
	{
		(*f) = MD5_G(B, C, D);
		(*g) = ((5 * i + 1) % 16);
	}
	else if (MD5_ROUND_3)
	{
		(*f) = MD5_H(B, C, D);
		(*g) = ((3 * i + 5) % 16);
	}
	else if (MD5_ROUND_4)
	{
		(*f) = MD5_I(B, C, D);
		(*g) = ((7 * i) % 16);
	}
	return ;
}
