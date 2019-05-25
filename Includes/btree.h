/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:41:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:20:52 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_btree_node
{
	void				*item;
	struct s_btree_node	*left;
	struct s_btree_node	*right;
}				t_btree;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

t_btree			*btree_newnode(void *item);

void			btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void			btree_apply_infix(t_btree *root, void (*applyf)(void *));

void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));

void			btree_insert(t_btree **root, void *item,
				int (*cmpf)(void *, void *));

void			*btree_getitem(t_btree *root, void *item_ref,
				int (*cmpf)(void *, void *));

int				btree_level_count(t_btree *root);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
