/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reverse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:32:42 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_reverse -- reverse a list in place.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         int
**         list_reverse(t_list **head);
**
**    PARAMETERS
**
**         t_list **head     Pointer to a pointer
**                           to the first element
**                           of a list.
**
**    DESCRIPTION
**         Reverses a list in place.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/list.h"

int		list_reverse(t_list **head)
{
	int		size;
	t_list	*last;
	t_list	*after_last;

	if (head && (*head))
	{
		size = list_count(*head);
		last = list_last_elem(*head);
		while (size-- > 1)
		{
			after_last = (*head);
			(*head) = (*head)->next;
			after_last->next = last->next;
			last->next = after_last;
		}
		head = &last;
	}
	return (-1);
}
