/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:40:33 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:21:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

typedef struct	s_list_element
{
	void					*item;
	struct s_list_element	*next;
}				t_list;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

t_list			*list_newelem(const void *item);

int				list_prepend(t_list **head, const void *item);
int				list_append(t_list **head, const void *item);
int				list_append_tail(t_list **tail, const void *item);
int				list_append_both(t_list **head, t_list **tail,
				const void *item);
int				list_extend(t_list **head, const void **item_vector);
int				list_extend_tail(t_list **tail, const void **item_vector);
int				list_extendleft(t_list **head, const void **item_vector);
int				list_insert(t_list **head, const void *item,
				int (*cmp)(void *, void *));
int				list_insert_at(t_list **head, const void *item,
				unsigned int i);

void			*list_item_at(t_list *head, unsigned int i);
void			*list_last_item(t_list *head);
t_list			*list_elem_at(t_list *head, unsigned int i);
t_list			*list_last_elem(t_list *head);
void			*list_getitem(t_list *head, const void *item_ref,
				int (*cmp)(void *, void *));
t_list			*list_getelem(t_list *head, const void *item_ref,
				int (*cmp)(void *, void *));

void			*list_pop(t_list **head);
void			*list_pop_tail(t_list **tail);
void			*list_popleft(t_list **head);
void			*list_pop_item_at(t_list **head, unsigned int i);
void			*list_pop_item(t_list **head, const void *item_ref,
				int (*cmp)(void *, void *));
int				list_remove_item(t_list **head, const void *item_ref,
				int (*cmp)(void *, void *), void (*free_item)(void *));
int				list_remove_item_at(t_list **head, unsigned int i,
				void (*free_item)(void *));
int				list_remove_elem(t_list **head, const void *item_ref,
				int (*cmp)(void *, void *), void (*free_item)(void *));
int				list_remove_elem_at(t_list **head, unsigned int i,
				void (*free_item)(void *));
int				list_clear(t_list **head, void (*free_item)(void *));

void			list_iter(t_list *head, void (*f)(void *item));
void			list_iteri(t_list *head,
				void (*f)(unsigned int i, void *item));
unsigned int	list_count(t_list *head);
void			list_sort(t_list **head, int (*cmp)(void *, void *));
int				list_reverse(t_list **head);
int				list_map(t_list **dest, t_list *src,
				t_list *(*f)(t_list *elem));
int				list_merge(t_list **list1, t_list *list2);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
