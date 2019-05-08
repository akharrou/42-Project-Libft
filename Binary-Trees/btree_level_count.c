/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 21:06:11 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/btree.h"

int		btree_level_count(t_btree *root)
{
	int left_count;
	int right_count;

	if (!root)
		return (0);
	left_count = 0;
	right_count = 0;
	if (root->left)
		left_count = btree_level_count(root->left);
	if (root->right)
		right_count = btree_level_count(root->right);
	return ((left_count > right_count) ? left_count + 1 : right_count + 1);
}
