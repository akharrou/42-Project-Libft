/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_extend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 15:56:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/07 16:45:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/dict.h"

/*
**  Add multiple items to a dict.
*/

int		dict_extend(t_hashtable **table, char **key_vector, void **item_vector)
{
	int	ret;

	if (table && key_vector && item_vector && *key_vector && *item_vector)
	{
		if (*table == NULL)
			if (!((*table) = hashtab_new(INIT_HASHTABLE_SIZE)))
				return (-1);
		while (*key_vector && *item_vector)
		{
			ret = hashtab_insert(table, *key_vector, *item_vector);
			if (ret == -1)
				return (-1);
		}
		return (0);
	}
	return (-1);
}
