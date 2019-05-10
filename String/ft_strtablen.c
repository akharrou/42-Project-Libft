/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 10:44:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 10:45:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

size_t	ft_strtablen(const char **strtab)
{
	size_t i;

	i = 0;
	if (strtab)
		while (strtab[i])
			++i;
	return (i);
}
