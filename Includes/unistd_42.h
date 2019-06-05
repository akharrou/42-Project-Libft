/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unistd_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:12:47 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/01 15:34:54 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNISTD_42_H
# define UNISTD_42_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Header File(s).
*/

# include <sys/types.h>
# include <dirent.h>

# include "stdlib_42.h"
# include "stdio_42.h"
# include "macros_42.h"

# include "vector.h"
# include "ft_printf.h"

# include <errno.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Filesystem Function(s).
*/

t_vector	ft_getdirents(DIR *dirdes);
t_vector	ft_getdirentries(const char dirname[MAX_PATHLEN + 1]);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
