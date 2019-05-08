/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_item.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 09:04:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_remove_item -- remove (i.e free) an item of a list without
**                             removing its element.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_remove_item(t_list **head, const void *item_ref,
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
**         Iterates through a list until the item reference is matched
**         according to the comparative function, then frees the item
**         with the 'free_item()' function.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_remove_item(t_list **head, const void *item_ref,
			int (*cmp)(void *, void *), void (*free_item)(void *))
{
	t_list	*current;
	t_list	*previous;

	if (head && *head && item_ref && cmp && free_item)
	{
		current = (*head);
		while (cmp((void *)item_ref, current->item) != 0)
		{
			if (!(current->next))
				return (-1);
			previous = current;
			current = current->next;
		}
		free_item(current->item);
		return (0);
	}
	return (-1);
}
