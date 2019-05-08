/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:26:14 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 08:54:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_remove -- remove and free an entry from a hashtable.
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "string_42.h"
**         #include "hashtable.h"
**
**         int
**         hashtab_remove(t_hashtable **table, char *key);
**
**    PARAMETERS
**
**         t_hashtable **table           Pointer to a pointer to a
**                                       hashtable.
**
**         char *key                     Key corresponding to an
**                                       entry.
**
**    DESCRIPTION
**         Looks for an entry based on the 'key', if found, the entry is
**         deleted/free'd along with everything it contains. If the entry
**         is not found, nothing happens and -1 is returned.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/hashtable.h"

int	hashtab_remove(t_hashtable **table, char *key)
{
	void *item;

	item = hashtab_popitem(table, key);
	if (item != NULL)
	{
		free(item);
		return (0);
	}
	return (-1);
}
