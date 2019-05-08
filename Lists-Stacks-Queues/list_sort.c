/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:26:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/04 13:17:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         list_sort -- sort a list according to a comparasion function.
**
**    SYNOPSIS
**         #include <../libft.h>
**
**         void
**         list_sort(t_list **head, int (*cmp)(void *, void *));
**
**    PARAMETERS
**
**         t_list **head                 Pointer to a pointer to the
**                                       first element of a list
**
**         int (*cmp)(void *, void *)    A comparasion function to
**                                       compare two items.
**
**                                       Returns:
**                                          -  >= 1   -- if a > b
**                                          -  0      -- if a == b
**                                          -  < 0    -- if a < b
**
**    DESCRIPTION
**         Sorts the elements of a list according to a comparasion
**         function.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/list.h"

void	list_sort(t_list **head, int (*cmp)(void *, void *))
{
	unsigned int	i;
	unsigned int	size;
	void			*temp;
	t_list			*probe;

	if (head && (*head))
	{
		size = list_count(*head);
		while (size > 0)
		{
			i = 0;
			probe = (*head);
			while (++i < size)
			{
				if ((*cmp)(probe->item, probe->next->item) > 0)
				{
					temp = probe->item;
					probe->item = probe->next->item;
					probe->next->item = temp;
				}
				probe = probe->next;
			}
			size--;
		}
	}
}
