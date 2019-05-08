/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 21:20:39 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_pop_tail -- removes the last element of a list and returns
**                          the item it contains.
**
**                          If (*tail) points to anywhere other than the
**                          last element, (*tail), after popping, will be
**                          made to point to the new last element.
**
**                          If (*tail) points to the last element of a list,
**                          (*tail), after popping, will be made to point to
**                          NULL.
**
**                          This function can only be used ONCE with a
**                          pointer to a pointer that points to the last
**                          element of a list and TWICE with one that points
**                          to anywhere else.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         void *
**         list_pop_tail(t_list **tail);
**
**    PARAMETERS
**
**         t_list **tail        Pointer to a pointer to any
**                              element of the list other
**                              than the last element.
**
**    DESCRIPTION
**         Removes and frees the last element of the list, that (*tail)
**         points to, updates the new last element of the list to point
**         to NULL and (*tail) to point to the new last element of the
**         list. Finally, it returns the item that was contained by the
**         last element of the list.
**
**         If the list had a single element, (*tail), after popping the
**         last element, will be made to point to NULL.
**
**    RETURN VALUES
**         If successful returns the item from the popped element of the
**         list; otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

void		*list_pop_tail(t_list **tail)
{
	void	*item;
	t_list	*current;
	t_list	*previous;

	if (tail && (*tail))
	{
		previous = NULL;
		current = (*tail);
		while (current->next)
		{
			previous = current;
			current = current->next;
		}
		if (previous)
		{
			previous->next = current->next;
			(*tail) = previous;
		}
		else
			(*tail) = NULL;
		item = current->item;
		free(current);
		return (item);
	}
	return (NULL);
}
