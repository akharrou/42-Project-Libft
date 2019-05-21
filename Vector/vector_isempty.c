/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_isempty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:12:13 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 15:42:52 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         vector_isempty -- check if a vector is empty
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         vector_isempty(struct s_vector *self);
**
**    PARAMETERS
**
**         struct s_vector *self     Pointer to a vector instance.
**
**    DESCRIPTION
**         Evaluates the load to capacity status of a vector and
**         returns either empty or not empty, respectively 1 or
**         0.
**
**    RETURN VALUES
**         If the vector is empty 1 is returned; otherwise 0.
*/

#include "../Includes/vector.h"

inline int		vector_isempty(struct s_vector *self)
{
	return ((*self).load == 0);
}
