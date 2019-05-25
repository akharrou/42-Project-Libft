/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector_destructor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:06:14 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 18:07:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         uvector_destructor -- destruct a uvector instance
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         uvector_destructor(struct s_uvector *self);
**
**    PARAMETERS
**
**         struct s_uvector *self    Pointer to a uvector instance.
**
**    DESCRIPTION
**         Free's the pointer to the uvector instance's array.
**
**    RETURN VALUES
**         None.
*/

#include "../Includes/uvector.h"
#include "../Includes/stdlib_42.h"

void	uvector_destructor(struct s_uvector *instance)
{
	free(instance->uvector);
}
