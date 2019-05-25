/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_rightshift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:49:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:38:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_rightshift -- right shift all elements of a uvector by 'n'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_uvector
**         uvector_rightshift(struct s_uvector instance, size_t n);
**
**    PARAMETERS
**
**         struct s_uvector instance    A uvector instance.
**
**         size_t n                    Number of positions to right shift
**                                     each element.
**
**    DESCRIPTION
**         Moves each element of the uvector to the right by 'n' indexes.
**
**    RETURN VALUES
**         Returns the uvector rightshifted.
*/

#include "../Includes/uvector.h"

struct s_uvector		uvector_rightshift(struct s_uvector instance, size_t n)
{
	size_t			i;
	size_t			j;

	if (n > instance.capacity)
		n = instance.capacity;
	i = instance.capacity - 1;
	j = 0;
	while (i - (n - 1) > 0)
	{
		instance.uvector[i] = instance.uvector[i - n];
		--i;
	}
	j = 0;
	return (instance);
}
