/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 15:17:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 15:27:41 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"

int		ft_matrix_clear(void ***matrix)
{
	int row;

	if (matrix)
	{
		if (*matrix)
		{
			row = 0;
			while ((*matrix)[row])
				free((*matrix)[row++]);
		}
		(*matrix) = NULL;
		return (0);
	}
	return (-1);
}
