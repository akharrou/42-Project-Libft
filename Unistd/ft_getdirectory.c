/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdirectory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 10:54:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_getdirectory -- get a vector with all directory entries in the
**                            'dirname' directory
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         ft_getdirectory(const char *dirname);
**
**    PARAMETERS
**         const char *dirname     Name of a directory.
**
**    DESCRIPTION
**         Reads the 'dirname' directory and stores all its entries
**         (struct dirent *) in a vector.
**
**    RETURN VALUES
**         A vector containing all entries of the 'dirname' directory.
*/

#include "../Includes/unistd_42.h"

t_vector		ft_getdirectory(const char *dirname)
{
	t_vector	directory;
	DIR			*dirdes;

	dirdes = opendir(dirname);
	if (dirdes != NULL)
	{
		directory = ft_getdir(dirdes);
		closedir(dirdes);
	}
	else
	{
		perror(NULL);
		directory.clear(&directory);
	}
	return (directory);
}
