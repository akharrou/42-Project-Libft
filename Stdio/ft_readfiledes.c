/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfiledes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 07:00:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/10 10:34:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_readfiledes -- read file from a descriptor into a buffer
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         ft_readfiledes(int filedes);
**
**    PARAMETERS
**
**         int filedes          File descriptor from which to
**                              read file.
**
**    DESCRIPTION
**         Reads file from given file descriptor and stores
**         the contents of the file into a buffer.
**
**    RETURN VALUES
**         If successful returns a pointer to the buffer in
**         which the file content was stored; otherwise NULL.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"
#include "../Includes/stdio_42.h"

char	*ft_readfiledes(int filedes)
{
	char	*file;
	char	*line;
	int		status;

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
