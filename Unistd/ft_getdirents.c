/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getdirents.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 17:04:11 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 17:04:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_getdirents -- get a vector with all directory entries in the
**                      directory that a directory descriptor points to
**
**    SYNOPSIS
**         #include <libft.h>
**
**         t_vector
**         ft_getdirents(DIR *dirdes);
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
**
**         If an error occurs, an error is printed to standard out & an
**         empty vector is returned.
*/

#include "../Includes/unistd_42.h"

t_vector			ft_getdirents(DIR *dirdes)
{
	struct dirent	*direntry;
	t_vector		directory;

	directory = vector.empty(NULL);
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
