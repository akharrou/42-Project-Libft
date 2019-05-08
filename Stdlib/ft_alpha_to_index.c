/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_to_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 08:13:18 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/07 08:23:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"

unsigned int	ft_alpha_to_index(char c)
{
	if (ISLOWER(c))
	{
		return (c - 97);
	}
	else if (ISUPPER(c))
	{
		return (c - 65);
	}
	else if (c == '\'')
	{
		return (26);
	}
	return (0);
}
