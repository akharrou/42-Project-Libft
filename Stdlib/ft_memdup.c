/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 19:41:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:42:46 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_memdup -- duplicate a memory block
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         ft_memdup(void *ptr, size_t size);
**
**    PARAMETERS
**
**         void *ptr        Pointer to a memory block.
**
**         size_t size      Size of the memory block.
**
**    DESCRIPTION
**         Allocates a new memory block and copies in every byte
**         of the memory block pointed to by 'ptr' into the newly
**         allocated memory block.
**
**    RETURN VALUES
**         If successful returns the duplicate memory block;
**         otherwise NULL.
*/

#include "../Includes/stdlib_42.h"

void	*ft_memdup(void *ptr, size_t size)
{
	void	*duplicate_block;

	duplicate_block = (void *)malloc(size);
	if (!duplicate_block)
		return (NULL);
	duplicate_block = (void *)ft_memcpy(duplicate_block, ptr, size);
	return (duplicate_block);
}
