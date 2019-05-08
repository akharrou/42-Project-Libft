/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintmaxlen_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 01:54:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/18 20:34:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

size_t		ft_uintmaxlen_base(uintmax_t n, unsigned int base)
{
	size_t	length;

	length = 1;
	while (n >= base)
	{
		n /= base;
		++length;
	}
	return (length);
}
