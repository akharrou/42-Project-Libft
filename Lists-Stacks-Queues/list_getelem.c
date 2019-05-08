/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_getelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:29:18 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_getelem -- retrieve an element containing a certain item.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         t_list *
**         list_getelem(t_list *head, const void *item_ref,
**             int (*cmp)(void *, void *));
**
**    PARAMETERS
**
**         t_list *head                  Pointer to the first element
**                                       of a list.
**
**         const void *item_ref          A reference to find the item.
**
**         int (*cmp)(void *, void *)    A pointer to a comparasion
**                                       function. It compares the
**                                       item reference to the current
**                                       item. Returns 0 for a match.
**
**    DESCRIPTION
**         Iterates through a list until the specified item reference is
**         matched according to the comparative function.
**
**    RETURN VALUES
**         If successfully found, the element containing the item is
**         returned; otherwise NULL is returned.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

t_list	*list_getelem(t_list *head, const void *item_ref,
			int (*cmp)(void *, void *))
{
	if (head && cmp && item_ref)
	{
		while (cmp((void *)item_ref, head->item) != 0)
		{
			if (head->next)
				head = head->next;
			else
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
