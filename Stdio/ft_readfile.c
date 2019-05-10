/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 22:53:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 10:35:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_readfile -- read file into a buffer
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         ft_readfile(char *filename);
**
**    PARAMETERS
**
**         char *filename       Name of the file from which to
**                              read.
**
**    DESCRIPTION
**         Reads file 'filename' and stores its contents in a
**         buffer.
**
**    RETURN VALUES
**         If successful returns a pointer to the buffer in
**         which the file content was stored; otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/stdio_42.h"
#include <fcntl.h>

char	*ft_readfile(char *filename)
{
	char	*file;
	char	*line;
	int		status;
	int		filedes;

	filedes = open(filename, O_RDONLY);
	if (filedes >= 0)
	{
		file = ft_strdup("");
		status = 1;
		while (status > 0)
		{
			status = ft_readline(filedes, &line);
			file = ft_strappend(file, line, 1, 1);
		}
		if (status < 0 && file)
			free(file);
		else
			return (file);
	}
	return (NULL);
}
