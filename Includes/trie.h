/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:46:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:22:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIE_H
# define TRIE_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

# define ALPHABET_SIZE 27
# define HEXDIGIT_SIZE 16
# define SIZE_OF_ARRAY ALPHABET_SIZE

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_trie_node
{
	void				*item;
	struct s_trie_node	*children[SIZE_OF_ARRAY];
}				t_trie;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

unsigned int	ft_alpha_to_index(char c);
unsigned int	ft_char_to_index(char c);

t_trie			*trie_newnode(void);

int				trie_insert(t_trie **root, char *hash, void *item,
				unsigned int (*char_to_index)(char c));

void			trie_remove(t_trie **root, char *hash,
				unsigned int (*char_to_index)(char c));

int				trie_clear(t_trie **root);

void			*trie_getitem(t_trie *root, char *hash,
				unsigned int (*char_to_index)(char c));

unsigned int	trie_count(t_trie *root);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
