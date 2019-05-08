/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_extendleft.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:25:33 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_extendleft -- prepends multiple new elements to a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_extendleft(t_list **head, const void **item_vector);
**
**    PARAMETERS
**
**         t_list **head                 Pointer to a pointer to the
**                                       first element of a list.
**
**         const void **item_vector      Vector containing items
**                                       to add to the end of the
**                                       list.
**
**    DESCRIPTION
**         Creates new list elements using the items in the item
**         vector and adds the newly created list elements to the
**         beginning of the list (that (*head) points to).
**
**         (*head) is made to point to the first element of the list.
**
**    RETURN VALUES
**         Returns 0 if successful; otherwise -1.
*/

#include "../Includes/list.h"

int		list_extendleft(t_list **head, const void **item_vector)
{
	if (head && item_vector)
	{
		while (*item_vector)
		{
			if ((list_prepend(head, *item_vector)) == -1)
				return (-1);
			item_vector++;
		}
		return (0);
	}
	return (-1);
}
