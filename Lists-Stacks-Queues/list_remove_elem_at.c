/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_elem_at.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 07:00:41 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_remove_elem_at -- remove (i.e free) the i'th element and
**                                the item it contains.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_remove_elem_at(t_list **head, unsigned int i,
**             void (*free_item)(void *);
**
**    PARAMETERS
**
**         t_list **head                  Pointer to a pointer to the
**                                        first element of a list.
**
**         unsigned int i                 Index of the element to be
**                                        removed.
**
**         void (*free_item)(void *)      A pointer to a function that
**                                        frees an element's item.
**
**    DESCRIPTION
**         Finds the i'th element of the list then frees its item
**         followed by the list element itself and finally stitches
**         the list back together.
**
**         If the removed element is the first element of the list,
**         then (*head), after the removal, is updated to point to
**         the new first element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

int		list_remove_elem_at(t_list **head, unsigned int i,
			void (*free_item)(void *))
{
	unsigned int	index;
	t_list			*current;
	t_list			*previous;

	if (head && (*head))
	{
		index = 0;
		current = (*head);
		while (i > index++)
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
