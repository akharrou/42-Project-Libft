/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_instance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:06:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 11:20:39 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_instance -- instantiate a vector of certain capacity and
**                            with the default free'ing method
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_instance(void);
**
**    PARAMETERS
**         None.
**
**    DESCRIPTION
**         Creates an instance of a vector object; its vector
**         is given a certain initial capacity; the default
**         free'ing method for each element is kept.
**
**    RETURN VALUES
**         Returns the constructed instance.
*/

#include "../Includes/vector.h"

struct s_vector		vector_instance(void)
{
	return (vector.constructor(VECTOR_INIT_CAPACITY, NULL));
}
