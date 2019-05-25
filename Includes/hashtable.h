/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 08:16:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:21:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHTABLE_H
# define HASHTABLE_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define HASHCODE(key, buckets) (ft_hash(key) % buckets)

# define INIT_HASHTABLE_SIZE 256

# define MIN_LOAD_FACTOR 0.0
# define MAX_LOAD_FACTOR 0.7

# define HTAB_MULTIPLIER 2
# define HTAB_DIVISER 2

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct		s_entry
{
	char			*key;
	void			*item;
	struct s_entry	*next;
}					t_entry;

typedef struct		s_hashtable
{
	unsigned int	entries;
	unsigned int	num_buckets;
	t_entry			**buckets;
}					t_hashtable;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

t_hashtable			*hashtab_init(void);
t_hashtable			*hashtab_new(unsigned int num_entries);

int					hashtab_insert(t_hashtable **table, char *key, void *item);
t_entry				*hashtab_getentry(t_hashtable *table, char *key);
void				*hashtab_getitem(t_hashtable *table, char *key);

void				*hashtab_popitem(t_hashtable **table, char *key);
int					hashtab_remove(t_hashtable **table, char *key);
int					hashtab_clear(t_hashtable **table);
int					hashtab_destroy(t_hashtable **table);

int					hashtab_grow(t_hashtable **table);
int					hashtab_shrink(t_hashtable **table);

int					hashtab_count(t_hashtable *table);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
