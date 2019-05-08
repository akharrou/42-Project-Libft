/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_append_tail.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:33:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_append_tail -- adds a new element to the end of a list and
**                             (*tail) is made to point to the last element
**                             of the list.
**
**    SYNOPSIS
**         #include "list.h"
**
**         t_list *
**         list_append_tail(t_list **tail, const void *item);
**
**    PARAMETERS
**
**         t_list **tail          Pointer to a pointer to the
**                                last element of the list (or
**                                any element of the list).
**
**         const void *item       Data that will be stored in
**                                the new list element.
**
**    DESCRIPTION
**         Creates a new list element, storing 'item' as its item, then
**         adds the element to the end of the list (that (*tail) points
**         to).
**
**         If the list does not exist the newly created element is made
**         to be the last/first element of the list.
**
**         (*tail) is made to point to the new last element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_append_tail(t_list **tail, const void *item)
{
	t_list	*probe;
	t_list	*new_elem;

	if (tail && (new_elem = list_newelem(item)))
	{
		if (*tail)
		{
			probe = (*tail);
			while (probe->next)
				probe = probe->next;
			probe->next = new_elem;
			(*tail) = probe->next;
		}
		else
			(*tail) = new_elem;
		return (0);
	}
	return (-1);
}
