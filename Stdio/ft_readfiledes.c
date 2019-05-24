/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfiledes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 07:00:10 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 16:06:07 by akharrou         ###   ########.fr       */
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
**         ft_readfiledes(const int filedes);
**
**    PARAMETERS
**
**         const int filedes    File descriptor from which to
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
#include "../Includes/macros_42.h"
#include <errno.h>

char		*ft_readfiledes(const int filedes)
{
	char	chunk[PAGE_SIZE + 1];
	char	*file;
	int		ret;

	file = ft_strdup("");
	ret = 1;
	while (ret > 0)
	{
		ret = read(filedes, &chunk, PAGE_SIZE);
		if (ret >= 0)
		{
			chunk[ret] = '\0';
			file = ft_strappend(file, chunk, 1, 0);
		}
	}
	if (ret < 0 && file)
	{
		ft_printf("Error: %s{underlined}\n", strerror(errno));
		free(file);
		file = NULL;
	}
	return (file);
}
