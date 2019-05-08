/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_popitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:17:09 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/17 06:37:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_popitem -- pop an item from a hashtable.
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "string_42.h"
**         #include "hashtable.h"
**
**         void *
**         hashtab_popitem(t_hashtable **table, char *key);
**
**    PARAMETERS
**
**         t_hashtable **table       Pointer to a pointer to a
**                                   hashtable.
**
**         char *key                 Key corresponding to an
**                                   entry.
**
**    DESCRIPTION
**         Looks for an entry based on the 'key', if found, the entry's
**         item is saved, the entry is then free'd and finally, a pointer
**         to the saved item is returned.
**
**    RETURN VALUES
**         If successful returns a pointer to the item; otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/hashtable.h"

/*
**  Helper function used to free an entry and that which it contains
**  except for its item.
*/

static void	free_entry_except_item(t_entry **entry)
{
	if (entry && *entry)
	{
		if ((*entry)->key)
			free((*entry)->key);
		free(*entry);
		(*entry) = NULL;
	}
}

static void	*popitem_util(t_hashtable **table, t_entry *first_entry,
					unsigned int index, char *key)
{
	t_entry		*prev_entry;
	t_entry		*cur_entry;
	void		*item;

	cur_entry = first_entry;
	while (cur_entry)
	{
		if (ft_strcmp(cur_entry->key, key) == 0)
		{
			if (cur_entry == ((*table)->buckets)[index])
				((*table)->buckets)[index] = cur_entry->next;
			else
				prev_entry->next = cur_entry->next;
			item = cur_entry->item;
			(*table)->entries -= 1;
			free_entry_except_item(&cur_entry);
			return (item);
		}
		prev_entry = cur_entry;
		cur_entry = cur_entry->next;
	}
	return (NULL);
}

void		*hashtab_popitem(t_hashtable **table, char *key)
{
	unsigned int	index;

	if (table && *table && key)
	{
		index = HASHCODE(key, (*table)->num_buckets);
		return (
			popitem_util(table, ((*table)->buckets)[index], index, key));
	}
	return (NULL);
}
