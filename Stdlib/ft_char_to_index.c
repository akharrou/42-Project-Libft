/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 08:13:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"

unsigned int	ft_char_to_index(char c)
{
	if (ISDIGIT(c))
	{
		return (c - '0');
	}
	else if (ISLOWER(c))
	{
		return (c - 'a' + 10);
	}
	else if (ISUPPER(c))
	{
		return (c - 'A' + 10);
	}
	else if (c == '\'')
	{
		return (36);
	}
	return (0);
}
