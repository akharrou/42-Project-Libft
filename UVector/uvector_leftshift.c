/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_leftshift.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:49:00 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 16:49:01 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_leftshift -- left shift all elements of a uvector by 'n'
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_uvector
**         uvector_leftshift(struct s_uvector instance, size_t n);
**
**    PARAMETERS
**
**         struct s_uvector instance    A uvector instance.
**
**         size_t n                    Number of positions to left shift
**                                     each element.
**
**    DESCRIPTION
**         Moves each element of the uvector to the left by 'n' indexes.
**
**    RETURN VALUES
**         Returns the uvector leftshifted.
*/

#include "../Includes/uvector.h"

struct s_uvector	uvector_leftshift(struct s_uvector instance, size_t n)
{
	size_t	i;

	if (n > instance.capacity)
		n = instance.capacity;
	i = 0;
	while ((i + n) < instance.capacity)
	{
		instance.uvector[i] = instance.uvector[i + n];
		++i;
	}
	return (instance);
}
