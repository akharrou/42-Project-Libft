/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_extend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:19:47 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_extend -- appends multiple new elements to a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_extend(t_list **head, const void **item_vector);
**
**    PARAMETERS
**
**         t_list **head                 Pointer to a pointer to the
**                                       first element of a list
**                                       (that said, it could be a
**                                       pointer to any element of
**                                       a list since the list will
**                                       be traversed in any case).
**
**         const void **item_vector      Vector containing items
**                                       to add to the end of the
**                                       list.
**
**    DESCRIPTION
**         Creates new list elements using the items in the item
**         vector and adds the newly created list elements to the
**         end of the list (that (*head) points to).
**
**         (*head) stays pointing to whatever it originally pointed to.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_extend(t_list **head, const void **item_vector)
{
	t_list	*original_head;

	if (head && item_vector)
	{
		if (!(*head))
			(*head) = list_newelem(*item_vector++);
		original_head = (*head);
		while (*item_vector)
		{
			if ((list_append_tail(head, *item_vector)) == -1)
				return (-1);
			item_vector++;
		}
		(*head) = original_head;
		return (0);
	}
	return (-1);
}
