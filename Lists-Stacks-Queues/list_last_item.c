/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last_item.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:36:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_last_item -- get the last item of a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         t_list *
**         list_last_item(t_list *head);
**
**    PARAMETERS
**
**         t_list *head      Pointer to the first element of
**                           a list.
**
**    DESCRIPTION
**         Traverses the list until it finds the last element of
**         the list then returns a pointer to its item.
**
**    RETURN VALUES
**         If successful returns a pointer to the last element
**         item.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

void		*list_last_item(t_list *head)
{
	t_list	*last_elem;

	last_elem = list_last_elem(head);
	if (last_elem)
		return (last_elem->item);
	return (NULL);
}
