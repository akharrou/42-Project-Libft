/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_insert.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:38:40 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/trie.h"

int		trie_insert(t_trie **root, char *hash, void *item,
		unsigned int (*char_to_index)(char c))
{
	t_trie			*cur_node;
	unsigned int	index;

	if (root && hash && char_to_index)
	{
		if (!(*root))
			if (!(*root = trie_newnode()))
				return (-1);
		cur_node = (*root);
		while (*hash != '\0')
		{
			index = char_to_index(*hash);
			if ((cur_node->children)[index] == NULL)
				(cur_node->children)[index] = trie_newnode();
			cur_node = (cur_node->children)[index];
			hash++;
		}
		cur_node->item = item;
		return (0);
	}
	return (-1);
}
