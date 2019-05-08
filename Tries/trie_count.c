/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_count.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:38:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/trie.h"

unsigned int	trie_count(t_trie *root)
{
	unsigned int item_count;
	unsigned int i;

	if (root)
	{
		item_count = 0;
		if (root->item)
			item_count++;
		i = 0;
		while (i < SIZE_OF_ARRAY)
		{
			if (root->children[i])
				item_count += trie_count(root->children[i]);
			i++;
		}
		return (item_count);
	}
	return (0);
}
