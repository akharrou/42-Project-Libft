/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:29:39 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_reverse -- reverse a vector in place
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_reverse(struct s_vector vector);
**
**    PARAMETERS
**
**         struct s_vector vector    An instance of a vector.
**
**    DESCRIPTION
**         Reverses in place a vector and returns it.
**
**    RETURN VALUES
**         If successful returns the vector reversed; otherwise NULL.
*/

#include "../Includes/vector.h"

struct s_vector		vector_reverse(struct s_vector instance)
{
	void			*tmp;
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
			tmp = instance.vector[i];
			instance.vector[i] = instance.vector[i + 1];
			instance.vector[i + 1] = tmp;
			++i;
		}
		++len;
	}
	return (instance);
}
