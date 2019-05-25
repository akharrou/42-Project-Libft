/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_destructor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 17:41:53 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:04:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_destructor -- destruct a vector instance
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         vector_destructor(struct s_vector *instance);
**
**    PARAMETERS
**
**         struct s_vector *instance     Pointer to a vector instance.
**
**    DESCRIPTION
**         Frees every element of the vector and then free's the
**         pointer to the vector.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/vector.h"
#include "../Includes/stdlib_42.h"

void	vector_destructor(struct s_vector *instance)
{
	instance->clear(instance);
	free(instance->vector);
	instance->vector = NULL;
	return ;
}
