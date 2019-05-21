/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:25:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 14:37:01 by akharrou         ###   ########.fr       */
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

struct s_vector	vector_reverse(struct s_vector vector)
{
	return (vector);
}

const struct s_vector_class vector = { .reverse = &vector_reverse };
