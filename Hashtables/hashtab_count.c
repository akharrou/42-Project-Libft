/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 11:46:36 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 12:11:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_count -- get the current number of entries in a hash table.
**
**    SYNOPSIS
**         #include "../Includes/hashtable.h"
**
**         int
**         hashtab_count(t_hashtable *table);
**
**    PARAMETERS
**
**         t_hashtable *table        Pointer to a hash table.
**
**    DESCRIPTION
**         Returns the number of entries in the hash table pointed
**         to by 'table'.
**
**    RETURN VALUES
**         Returns the number of entries in the hash table; if the
**         hash table doesn't exist, returns 0.
*/

#include "../Includes/hashtable.h"

int	hashtab_count(t_hashtable *table)
{
	if (table)
		return (table->entries);
	return (0);
}
