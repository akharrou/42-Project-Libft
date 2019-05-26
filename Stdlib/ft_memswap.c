/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:16:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 14:54:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

void	ft_memswap(void *a, void *b, void *tmp, size_t width)
{
	ft_memcpy(tmp, a, width);
	ft_memcpy(a, b, width);
	ft_memcpy(b, tmp, width);
}
