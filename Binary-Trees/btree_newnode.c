/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_newnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:08:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/btree.h"
#include "../Includes/stdlib_42.h"

t_btree		*btree_newnode(void *item)
{
	t_btree *new_node;

	if (!(new_node = malloc(sizeof(t_btree))))
		return (NULL);
	new_node->item = item;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
