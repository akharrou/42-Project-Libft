/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_prepend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:19:47 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_prepend -- adds a new element to the beginning of a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         t_list *
**         list_prepend(t_list **head, const void *item);
**
**    PARAMETERS
**
**         t_list **head          Pointer to a pointer to the
**                                first element of a list.
**
**         const void *item       Data that will be stored in
**                                the new list element.
**
**    DESCRIPTION
**         Creates a new list element, storing 'item' as its item, then
**         adds the element to the front of the list (that (*head) points
**         to).
**
**         If the list does not exist the newly created element is made
**         to be the first element of the list and (*head) is made to
**         point to it.
**
**         (*head) is made to point to the first element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_prepend(t_list **head, const void *item)
{
	t_list	*new_elem;

	if (head && (new_elem = list_newelem(item)))
	{
		if (*head)
			new_elem->next = (*head);
		(*head) = new_elem;
		return (0);
	}
	return (-1);
}
