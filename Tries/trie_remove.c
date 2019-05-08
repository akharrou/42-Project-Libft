/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trie_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 11:38:52 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdlib_42.h"
#include "../Includes/trie.h"

void	trie_remove(t_trie **root, char *hash,
		unsigned int (*char_to_index)(char c))
{
	unsigned int index;

	if (root && *root && hash)
	{
		if (*hash == '\0')
		{
			free((*root)->item);
			(*root)->item = NULL;
		}
		else
		{
			index = char_to_index(*hash);
			if (((*root)->children)[index])
				trie_remove(
					&(((*root)->children)[index]), hash + 1, char_to_index);
		}
		if ((*root)->item)
			return ;
		index = 0;
		while (index < SIZE_OF_ARRAY)
			if (((*root)->children)[index++])
				return ;
		free(*root);
		(*root) = NULL;
	}
}
