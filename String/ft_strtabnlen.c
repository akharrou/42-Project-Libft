/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabnlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 10:44:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 10:58:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

size_t	ft_strtabnlen(const char **strtab, long n)
{
	size_t	i;

	i = 0;
	if (strtab && n > 0)
		while (n-- > 0 && strtab[i])
			++i;
	return (i);
}
