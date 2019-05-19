/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:44:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 10:44:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_strtabnew -- create an empty and NULL'ed out string table
**                         (array) of a certain size
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char **
**         ft_strtabnew(int size);
**
**    PARAMETERS
**
**         int size        Size of string table.
**
**    DESCRIPTION
**         Creates an array of strings of size 'size' and points each
**         of its pointers to NULL.
**
**    RETURN VALUES
**         If successful returns a pointer to the string table (array);
**         otherwise NULL.
*/

#include "../Includes/stdlib_42.h"

char			**ft_strtabnew(int size)
{
	char		**strtab;
	int32_t		i;

	strtab = NULL;
	if (size > 0)
	{
		strtab = (char **)malloc(sizeof(char *) * (size + 1));
		if (strtab)
		{
			i = -1;
			while (++i <= size)
				strtab[i] = NULL;
		}
	}
	return (strtab);
}
