/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_grow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:25:07 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 12:16:07 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_grow -- grow a hashtable (to HTAB_MULTIPLIER times the size).
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         int
**         hashtab_grow(t_hashtable **table);
**
**    PARAMETERS
**
**         t_hashtable **table          Pointer to a pointer to a hashtable.
**
**    DESCRIPTION
**         Allocates a new hashtable, the size of the current hashtable
**         multipled by HTAB_MULTIPLIER (+ a little more is added to it
**         to get to the closest prime number). Then all entries of the
**         current hashtable are rehashed and stored into it the new
**         hashtable. Finally, the current hashtable is destroyed/free'd.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/hashtable.h"

/*
**    NAME
**         hashtab_rehash_entry -- brief.
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         static int
**         hashtab_rehash_entry(t_hashtable **dest_table, t_entry **entry);
**
**    PARAMETERS
**
**         t_hashtable **dest_table       Pointer to a pointer to the
**                                      destination hashtable for the
**                                      rehashed entry.
**
**         t_entry **entry              Pointer to an entry that is to
**                                      be rehashed.
**
**    DESCRIPTION
**         The entry is rehashed and the output is modulo'ed with the
**         size of the (*dest_table) size and stored at that index in the
**         hashtable that (*dest_table) points to.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

static int	hashtab_rehash_entry(t_hashtable **dest_table, t_entry **entry)
{
	unsigned int	index;

	if (dest_table && *dest_table && entry && *entry)
	{
		index = HASHCODE((*entry)->key, (*dest_table)->num_buckets);
		(*entry)->next = ((*dest_table)->buckets)[index];
		((*dest_table)->buckets)[index] = (*entry);
		(*dest_table)->entries += 1;
		return (0);
	}
	return (-1);
}

/*
**    NAME
**         hashtab_rehash_table -- rehash all entries of hashtable.
**
**    SYNOPSIS
**         #include <libft.h>
**
**         static int
**         hashtab_rehash_table(t_hashtable **src_table,
**                 t_hashtable **dest_table);
**
**    PARAMETERS
**
**         t_hashtable **src_table          Pointer to a pointer to the
**                                          hashtable whose entries are
**                                          to be rehashed.
**
**         t_hashtable **dest_table         Pointer to a pointer to the
**                                          destination hashtable that
**                                          will store the rehashed entries.
**
**    DESCRIPTION
**         Rehashes all entries of the 'src_table' hashtable into the
**         'dest_table' hashtable. The output of the hash function is
**         modulo'ed with the size of the 'dest_table' hashtable.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

static int	hashtab_rehash_table(t_hashtable **src_table,
				t_hashtable **dest_table)
{
	t_entry			*cur_entry;
	t_entry			*temp;
	unsigned int	i;

	if (src_table && *src_table && dest_table && *dest_table)
	{
		i = 0;
		while (i < (*src_table)->num_buckets)
		{
			if (((*src_table)->buckets)[i])
			{
				cur_entry = ((*src_table)->buckets)[i];
				while (cur_entry)
				{
					temp = cur_entry->next;
					if (hashtab_rehash_entry(dest_table, &cur_entry) == -1)
						return (-1);
					cur_entry = temp;
				}
				((*src_table)->buckets)[i] = NULL;
			}
			i++;
		}
	}
	return (((*dest_table)->entries == (*src_table)->entries) ? 0 : -1);
}

int			hashtab_grow(t_hashtable **table)
{
	t_hashtable		*new_table;

	if (table && *table)
	{
		new_table = hashtab_new((*table)->num_buckets * HTAB_MULTIPLIER);
		if (new_table)
		{
			if (hashtab_rehash_table(table, &new_table) == 0)
			{
				hashtab_destroy(table);
				(*table) = new_table;
				return (0);
			}
		}
	}
	return (-1);
}
