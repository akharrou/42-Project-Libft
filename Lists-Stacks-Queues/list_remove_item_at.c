/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_item_at.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 07:56:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_remove_item_at -- remove (i.e free) the i'th item of a
**                                list without removing its element.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_remove_item_at(t_list **head, const void *item_ref,
**             unsigned int i, void (*free_item)(void *));
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
**         Finds the i'th element of the list then frees the item
**         it contains with the 'free_item()' function.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_remove_item_at(t_list **head, unsigned int i,
			void (*free_item)(void *))
{
	unsigned int	index;
	t_list			*current;
	t_list			*previous;

	if (head && *head && free_item)
	{
		index = 0;
		current = (*head);
		while (i > index)
		{
			if (!(current->next))
				return (-1);
			previous = current;
			current = current->next;
			++index;
		}
		free_item(current->item);
		return (0);
	}
	return (-1);
}
