/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop_item.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 07:33:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_pop_item -- pop an item that matches a specific reference.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         void *
**         list_pop_item(t_list **head, const void *item_ref,
**             int (*cmp)(void *, void *));
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
**    DESCRIPTION
**         Traverses a list until the 'item_ref' matches the current
**         element's item, according to the comparasion function, then
**         removes the element from the list, frees its memory, stitches
**         the list back together and returns the popped element's item.
**
**         If the popped element is the first element of the list,
**         then (*head), after popping, is updated to point
**         to the new first element of the list.
**
**    RETURN VALUES
**         If successful returns the popped item; otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

void	*list_pop_item(t_list **head, const void *item_ref,
			int (*cmp)(void *, void *))
{
	void	*item;
	t_list	*current;
	t_list	*previous;

	if (head && *head && item_ref && cmp)
	{
		current = (*head);
		while (cmp((void *)item_ref, current->item) != 0)
		{
			if (!(current->next))
				return (NULL);
			previous = current;
			current = current->next;
		}
		if (current == (*head))
			(*head) = current->next;
		else
			previous->next = current->next;
		item = current->item;
		free(current);
		return (item);
	}
	return (NULL);
}
