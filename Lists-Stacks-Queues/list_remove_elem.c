/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:24:43 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_remove_elem -- removes (i.e frees) an element of the list
**                             along with the item it contains.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_remove_elem(t_list **head, const void *item_ref,
**             int (*cmp)(void *, void *), void (*free_item)(void *));
**
**    PARAMETERS
**
**         t_list **head                  Pointer to a pointer to the
**                                        first element of a list.
**
**         const void *item_ref           Reference to find the item.
**
**         int (*cmp)(void *, void *)     A pointer to a comparasion
**                                        function. It compares the
**                                        item reference to the current
**                                        item. Returns 0 for a match.
**
**         void (*free_item)(void *)      A pointer to a function that
**                                        frees an element's item.
**
**    DESCRIPTION
**         Traverses a list until the 'item_ref' matches the current
**         element's item, according to the comparasion function, then
**         frees the item, frees its element and stitches the list back
**         together.
**
**         If the removed element is the first element of the list, then
**         (*head), after the removal, is updated to point to the new first
**         element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

int		list_remove_elem(t_list **head, const void *item_ref,
			int (*cmp)(void *, void *), void (*free_item)(void *))
{
	t_list	*current;
	t_list	*previous;

	if (head && *head && item_ref && cmp)
	{
		current = (*head);
		while (cmp((void *)item_ref, current->item) != 0)
		{
			if (!(current->next))
				return (-1);
			previous = current;
			current = current->next;
		}
		if (current == (*head))
			(*head) = current->next;
		else
			previous->next = current->next;
		free_item(current->item);
		free(current);
		return (0);
	}
	return (-1);
}
