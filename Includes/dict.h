/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 08:17:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/07 16:46:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

# include "hashtable.h"

typedef t_hashtable	t_dict;

t_dict				*dict_new(unsigned int num_entries);

int					dict_insert(t_dict **table, char *key, void *item);
int					dict_extend(t_hashtable **table, char **key_vector,
						void **item_vector);

int					dict_getindex(t_dict *table, char *key);
void				*dict_getitem(t_dict *table, char *key);
t_entry				*dict_getentry(t_dict *table, char *key);
void				*dict_getitem_fast(t_dict *table, char *key,
					int table_index);
t_entry				*dict_getentry_fast(t_hashtable *table, char *key,
					int table_index);

int					dict_remove(t_hashtable **table, char *key);
int					dict_clear(t_dict **table);

#endif
