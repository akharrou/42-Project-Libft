/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:20:16 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 16:25:32 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/macros_42.h"

char	*ft_ftoa(float n, int width, int precision)
{
	return (ft_ftoa_base(n, DECIMAL_BASE, width, precision));
}
