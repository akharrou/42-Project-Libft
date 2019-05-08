/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 13:30:15 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_last_elem -- get the last element of a list.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         t_list *
**         list_last_elem(t_list *head);
**
**    PARAMETERS
**
**         t_list *head      Pointer to the first element of
**                           a list.
**
**    DESCRIPTION
**         Traverses the list until it finds the last element of
**         the list then returns a pointer to it.
**
**    RETURN VALUES
**         If successful returns a pointer to the last element of
**         list.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/list.h"

t_list		*list_last_elem(t_list *head)
{
	if (head)
	{
		while (head->next)
			head = head->next;
		return (head);
	}
	return (NULL);
}
