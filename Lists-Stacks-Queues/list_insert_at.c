/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_insert_at.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:27:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_insert -- inserts a new list element at a certain index.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_insert_at(t_list **head, const void *item, unsigned int i);
**
**    PARAMETERS
**
**         t_list **head          Pointer to a pointer to the
**                                first element of a list.
**
**         const void *item       Data that will be stored in
**                                the new list element.
**
**         unsigned int i         Index at which the new element
**                                will be inserted.
**
**    DESCRIPTION
**         Creates a new list element, storing 'item' as its item, then
**         inserts the newly created list element at index 'i' in the list.
**
**         If the given index goes past the end of the list, then the newly
**         created element is appended to the end of the list.
**
**         If the list does not exist the newly created element is made
**         to be the first element of the list.
**
**         (*head) is made to point to the first element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

static void		list_insert_elem_at(t_list **head, t_list **new_elem,
					unsigned int i)
{
	unsigned int	index;
	t_list			*current;
	t_list			*previous;

	index = 0;
	current = (*head);
	while (i > index)
	{
		if (!(current->next))
		{
			current->next = (*new_elem);
			return ;
		}
		previous = current;
		current = current->next;
		++index;
	}
	(*new_elem)->next = current;
	if (current == (*head))
		(*head) = (*new_elem);
	else
		previous->next = (*new_elem);
}

int				list_insert_at(t_list **head, const void *item,
					unsigned int i)
{
	t_list	*new_elem;

	if (head && (new_elem = list_newelem(item)))
	{
		if (*head)
			list_insert_elem_at(head, &new_elem, i);
		else
			(*head) = new_elem;
		return (0);
	}
	return (-1);
}
