/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_getentry_fast.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:29:58 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 11:07:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/dict.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

t_entry		*dict_getentry_fast(t_hashtable *table, char *key, int table_index)
{
	t_entry			*cur_entry;

	if (table && key && table_index > -1)
	{
		cur_entry = (table->buckets)[table_index];
		while (cur_entry)
		{
			if (ft_strcmp(cur_entry->key, key) == 0)
				return (cur_entry);
			cur_entry = cur_entry->next;
		}
	}
	return (NULL);
}
