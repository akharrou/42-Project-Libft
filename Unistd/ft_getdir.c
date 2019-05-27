/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:57 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 10:54:32 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_getdir -- get a vector with all directory entries in the
**                      directory that a directory descriptor points to
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         ft_getdir(DIR *dirdes);
**
**    PARAMETERS
**         DIR *dirdes     Directory descriptor.
**
**    DESCRIPTION
**         Reads the directory that the 'dirdes' directory descriptor
**         points to and stores all its entries (struct dirent *) in
**         a vector.
**
**    RETURN VALUES
**         A vector containing all entries of the directory that
**         'dirdes' points to.
*/

#include "../Includes/unistd_42.h"

t_vector			ft_getdir(DIR *dirdes)
{
	struct dirent	*direntry;
	t_vector		directory;

	directory = vector.constructor(VECTOR_INIT_CAPACITY, NULL);
	if (!dirdes)
	{
		perror(NULL);
		return (directory);
	}
	errno = 0;
	while (errno == 0 && (direntry = readdir(dirdes)) != NULL)
		directory.append(&directory, direntry);
	if (errno != 0)
	{
		perror(NULL);
		directory.clear(&directory);
	}
	return (directory);
}
