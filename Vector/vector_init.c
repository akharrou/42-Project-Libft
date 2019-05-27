/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:06:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 11:09:50 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_init -- instantiate a vector of a certain initial capacity
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_init(void (*custom_free)(void *));
**
**    PARAMETERS
**
**         void (*custom_free)(void *)    Function pointer that
**                                        points to a function
**                                        that will free a vector
**                                        element.
**
**    DESCRIPTION
**         Creates an instance of a vector object; its vector
**         is given a certain initial capacity.
**
**    RETURN VALUES
**         Returns the constructed instance.
*/

#include "../Includes/vector.h"

struct s_vector		vector_init(void (*custom_free)(void *))
{
	return (vector.constructor(VECTOR_INIT_CAPACITY, custom_free));
}
