/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:41:09 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/06 19:08:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

char	*ft_ftoa_base(float n, char *base, int width, int precision)
{
	return (ft_dtoa_base((double)n, base, width, precision));
}
