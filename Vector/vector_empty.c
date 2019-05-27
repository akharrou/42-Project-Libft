/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:57:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 11:04:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_empty -- instantiate an empty vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         struct s_vector
**         vector_empty(void (*custom_free)(void *));
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
**         will be un-allocated, i.e completely emtpy.
**
**    RETURN VALUES
**         Returns the constructed instance.
*/

#include "../Includes/vector.h"

struct s_vector		vector_empty(void (*custom_free)(void *))
{
	return (vector.constructor(0, custom_free));
}
