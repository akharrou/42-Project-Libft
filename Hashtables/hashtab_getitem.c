/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_getitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:10:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 08:52:21 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_getitem -- search and retrieve the item of an entry.
**
**    SYNOPSIS
**         #include "string_42.h"
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         void *
**         hashtab_getitem(t_hashtable *table, char *key);
**
**    PARAMETERS
**
**         t_hashtable *table      Pointer to a hashtable.
**
**         char *key               Key to find the entry.
**
**    DESCRIPTION
**         Looks for an entry based on the 'key', if it exists returns
**         a pointer to its item.
**
**    RETURN VALUES
**         If the entry is found, a pointer to its item is returned;
**         otherwise NULL is returned.
*/

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"
#include "../Includes/hashtable.h"

void	*hashtab_getitem(t_hashtable *table, char *key)
{
	t_entry			*entry;

	entry = hashtab_getentry(table, key);
	if (entry)
		return (entry->item);
	return (NULL);
}
