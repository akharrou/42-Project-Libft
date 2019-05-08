/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_getentry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:10:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 11:07:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_getentry -- search and retrieve an entry.
**
**    SYNOPSIS
**         #include "string_42.h"
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         t_entry *
**         hashtab_getentry(t_hashtable *table, char *key);
**
**    PARAMETERS
**
**         t_hashtable *table        Pointer to a hashtable.
**
**         char *key                 Key to find the entry.
**
**    DESCRIPTION
**         Looks for an entry based on the 'key', if it exists returns
**         a pointer to the entry.
**
**    RETURN VALUES
**         If the entry is found, a pointer to it is returned; otherwise
**         NULL is returned.
*/

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/hashtable.h"

t_entry	*hashtab_getentry(t_hashtable *table, char *key)
{
	t_entry			*cur_entry;
	unsigned int	index;

	if (table && key)
	{
		index = HASHCODE(key, table->num_buckets);
		cur_entry = (table->buckets)[index];
		while (cur_entry)
		{
			if (ft_strcmp(cur_entry->key, key) == 0)
				return (cur_entry);
			cur_entry = cur_entry->next;
		}
	}
	return (NULL);
}
