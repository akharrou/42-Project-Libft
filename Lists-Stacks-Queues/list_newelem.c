/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_newelem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:19:47 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_newelem -- creates a new list element
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         t_list *
**         list_newelem(void *item);
**
**    PARAMETERS
**
**         const void *item    Item that will be stored
**                             in the item field of the
**                             newly created list element.
**
**    DESCRIPTION
**         Allocates a list element and stores the given 'item'
**         in its item field.
**
**    RETURN VALUES
**         If successfuly returns a pointer to the newly created
**         list element; otherwise returns NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

t_list		*list_newelem(const void *item)
{
	t_list	*new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->item = (void *)item;
	new_elem->next = NULL;
	return (new_elem);
}
