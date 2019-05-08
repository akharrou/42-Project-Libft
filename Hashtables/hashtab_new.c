/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:26:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 11:22:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_new -- create a hashtable of size 'num_entries'.
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         t_hashtable *
**         hashtab_new(unsigned int num_entries);
**
**    PARAMETERS
**
**         unsigned int num_entries       Number of entries that the newly
**                                        created hashtable will be capable
**                                        of holding.
**
**                                        Note: this integer will be rounded
**                                        up to the closest prime number; this
**                                        this reduces the chances of colisions
**                                        even less likely.
**
**    DESCRIPTION
**         Allocates an empty hash table of size 'num_entries' (rounded up
**         to the closest prime number).
**
**    RETURN VALUES
**         If successful, returns a pointer to the newly allocated hashtable;
**         otherwise a NULL pointer is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/hashtable.h"

t_hashtable	*hashtab_new(unsigned int num_entries)
{
	t_hashtable		*table;
	unsigned int	i;

	if (num_entries < 1)
		return (NULL);
	if (!(table = (t_hashtable *)malloc(sizeof(t_hashtable))))
		return (NULL);
	num_entries = (unsigned int)ft_find_next_prime(num_entries);
	if (!(table->buckets =
			(t_entry **)malloc(sizeof(t_entry *) * num_entries)))
	{
		free(table);
		return (NULL);
	}
	table->num_buckets = num_entries;
	table->entries = 0;
	i = -1;
	while (num_entries > ++i)
		(table->buckets)[i] = NULL;
	return (table);
}
