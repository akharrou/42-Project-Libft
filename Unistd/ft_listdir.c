/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:11:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 18:53:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         listdir -- print a directory
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         listdir(DIR *dirdes);
**
**    PARAMETERS
**         DIR *dirdes     Directory descriptor.
**
**    DESCRIPTION
**         Prints out all entries in the directory that 'dirdes' points
**         to; one entry per line.
**
**         If an error occurs, an error is printed to standard out.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/unistd_42.h"

// void	ft_listdir(DIR *dirdes)
// {
// 	struct dirent	*dir;

// 	if (!dirdes)
// 	{
// 		perror(NULL);
// 		return ;
// 	}
// 	errno = 0;
// 	while (errno == 0 && (dir = readdir(dirdes)) != NULL)
// 		ft_printf("%s\n", dir->d_name);
// 	if (errno != 0)
// 		perror(NULL);
// 	return ;
// }
