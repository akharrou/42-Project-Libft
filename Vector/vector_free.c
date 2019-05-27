/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:08:45 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 09:59:36 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_free -- free an element of a vector
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void
**         vector_free(void *data);
**
**    PARAMETERS
**
**         void *data                Pointer to some data.
**
**    DESCRIPTION
**         Frees the data element 'data'.
**
**    RETURN VALUES
**         None.
**
**    NOTES
**         This is just the default free'ing function but it can be
**         overrided by a user provided custom free function in the
**         constructor.
**
**         Also can be redefined here.
*/

#include "../Includes/vector.h"

void		vector_free(void *data)
{
	(void)data;
	return ;
}
