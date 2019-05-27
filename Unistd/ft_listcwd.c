/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listcwd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:11:51 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 10:36:02 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         listcwd -- print current working directory
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         listcwd(void);
**
**    PARAMETERS
**         None.
**
**    DESCRIPTION
**         Prints out all entries in the current working directory; one
**         entry per line.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/unistd_42.h"

void	ft_listcwd(void)
{
	ft_listdirectory(".");
}
