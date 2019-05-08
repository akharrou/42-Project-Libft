/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_iteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:31:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_iteri -- iterate through a list applying a function to every
**                       item of the list; additionally the index of the item
**                       in the list is passed to the function.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         void
**         list_iteri(t_list *head, void (*f)(unsigned int i, void *item));
**
**    PARAMETERS
**
**         t_list *head                            Pointer to the first
**                                                 element of a list.
**
**         void (*f)(unsigned int i, void *item)   A pointer to a function
**                                                 that takes a list item
**                                                 as parameter and the
**                                                 index of that item
**                                                 in the list.
**
**    DESCRIPTION
**         Iterates through a list applying the function 'f()' to all
**         of its items.
**
**    RETURN VALUES
**         Returns nothing.
*/

#include "../Includes/list.h"

void	list_iteri(t_list *head, void (*f)(unsigned int i, void *item))
{
	unsigned int i;

	if (f)
	{
		i = 0;
		while (head)
		{
			f(i, head->item);
			head = head->next;
			++i;
		}
	}
}
