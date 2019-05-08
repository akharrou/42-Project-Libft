/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 19:49:00 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/02 12:23:36 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READLINE_H
# define FT_READLINE_H

# include "stdio_42.h"
# include "stdlib_42.h"
# include "string_42.h"
# include "macros_42.h"

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct	s_file_reader
{
	char	*buffer;
	char	*cur_pos;
}				t_file;

int				ft_readline(const int fd, char **line);

#endif
