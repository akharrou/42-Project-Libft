/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 12:16:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 12:18:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

void	ft_swap_mem(void *a, void *b, void *tmp, size_t width)
{
	ft_memcpy(tmp, a, width);
	ft_memcpy(a, b, width);
	ft_memcpy(b, tmp, width);
}
