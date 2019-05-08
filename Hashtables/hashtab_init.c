/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtab_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:26:31 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/09 11:27:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         hashtab_init -- create a hashtable of size INIT_HASHTABLE_SIZE.
**
**    SYNOPSIS
**         #include "stdlib_42.h"
**         #include "hashtable.h"
**
**         t_hashtable *
**         hashtab_init(void);
**
**    PARAMETERS
**         None.
**
**    DESCRIPTION
**         Allocates an empty hash table of size INIT_HASHTABLE_SIZE (rounded
**         up to the closest prime number).
**
**    RETURN VALUES
**         If successful, returns a pointer to the newly created hashtable;
**         otherwise a NULL pointer is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/hashtable.h"

t_hashtable	*hashtab_init(void)
{
	t_hashtable		*table;
	unsigned int	size;
	unsigned int	i;

	if (INIT_HASHTABLE_SIZE < 1)
		return (NULL);
	if (!(table = (t_hashtable *)malloc(sizeof(t_hashtable))))
		return (NULL);
	size = (unsigned int)ft_find_next_prime(INIT_HASHTABLE_SIZE);
	if (!(table->buckets =
			(t_entry **)malloc(sizeof(t_entry *) * size)))
	{
		free(table);
		return (NULL);
	}
	table->num_buckets = size;
	table->entries = 0;
	i = -1;
	while (size > ++i)
		(table->buckets)[i] = NULL;
	return (table);
}
