/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:29:39 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_reverse -- reverse a uvector in place
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_uvector
**         uvector_reverse(struct s_uvector uvector);
**
**    PARAMETERS
**
**         struct s_uvector uvector    An instance of a uvector.
**
**    DESCRIPTION
**         Reverses in place a uvector and returns it.
**
**    RETURN VALUES
**         If successful returns the uvector reversed; otherwise NULL.
*/

#include "../Includes/uvector.h"

struct s_uvector		uvector_reverse(struct s_uvector instance)
{
	t_integer		tmp;
	size_t			len;
	size_t			i;
	size_t			j;

	len = 0;
	while (len < instance.length)
	{
		j = (instance.length - len) - 1;
		i = 0;
		while (i < j)
		{
			tmp = instance.uvector[i];
			instance.uvector[i] = instance.uvector[i + 1];
			instance.uvector[i + 1] = tmp;
			++i;
		}
		++len;
	}
	return (instance);
}
