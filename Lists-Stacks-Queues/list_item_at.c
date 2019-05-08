/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_item_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:28:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_item_at -- retrieve the i'th item of a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         void *
**         list_item_at(t_list *head, unsigned int i);
**
**    PARAMETERS
**
**         t_list *head          Pointer to the first element of
**                               a list.
**
**         unsigned int i        Index at which to find the item.
**
**    DESCRIPTION
**         Retrieves the item found at at the i'th element of a list.
**
**         If the given index goes past the end of the list, then NULL
**         is returned.
**
**    RETURN VALUES
**         If successful returns the item found at the specified index;
**         otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

void	*list_item_at(t_list *head, unsigned int i)
{
	t_list *elem;

	elem = list_elem_at(head, i);
	if (elem)
		return (elem->item);
	return (NULL);
}
