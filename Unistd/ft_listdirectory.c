/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdirectory.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:36:12 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 18:54:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         listdirname -- print a directory
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         listdirname(const char *dirname);
**
**    PARAMETERS
**         const char *dirname     Name of a directory.
**
**    DESCRIPTION
**         Prints out all entries in the directory: 'dirname'; one
**         entry per line.
**
**         If an error occurs, an error is printed to standard out.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/unistd_42.h"

// void		ft_listdirectory(const char *dirname)
// {
// 	DIR		*dirdes;

// 	dirdes = opendir(dirname);
// 	if (dirdes)
// 	{
// 		ft_listdir(dirdes);
// 		closedir(dirdes);
// 	}
// 	else
// 		perror(NULL);
// 	return ;
// }
