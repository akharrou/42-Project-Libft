/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 13:28:08 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/26 09:54:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_realloc -- change the size of a memory block
**
**    SYNOPSIS
**         #include <libft.h>
**
**         void *
**         ft_realloc(void *ptr, size_t init_size, size_t new_size);
**
**    PARAMETERS
**
**         void *ptr            Pointer to a memory block previously
**                              allocated with malloc or realloc.
**
**                              Alternatively, this can be a null
**                              pointer, in which case a new block
**                              is allocated (as if malloc was
**                              called).
**
**         size_t init_size     Size of the memory block that 'ptr'
**                              points to, in bytes.
**
**         size_t new_size      New size for the new memory block,
**                              in bytes.
**
**    DESCRIPTION
**         The function may move the memory block to a new
**         location.
**
**         The content of the memory block is preserved up
**         to the lesser of the new and old sizes, even if
**         the block is moved to a new location. If the new
**         size is larger, the value of the newly allocated
**         portion is zero'd out.
**
**         In case that 'ptr' is a null pointer, the function
**         behaves like malloc, assigning a new block of
**         size bytes and returning a pointer to its
**         beginning.
**
**         If the function fails to allocate the requested
**         block of memory, a null pointer is returned, and
**         the memory block pointed to by argument 'ptr' is
**         not deallocated (it is still valid, and with its
**         contents unchanged).
**
**    RETURN VALUES
**         A pointer to the reallocated memory block, which
**         may be either the same as 'ptr' or a new location.
**
**         The type of this pointer is (void *), which can be
**         cast to the desired type of data pointer in order
**         to be dereferenceable.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/string_42.h"

void		*ft_realloc(void *ptr, size_t init_size, size_t new_size)
{
	char	*new_memblock;

	new_memblock = (void *)malloc(new_size);
	if (!new_memblock)
		return (NULL);
	if (ptr != NULL)
	{
		new_memblock = ft_memcpy(new_memblock, ptr, init_size);
		bzero(new_memblock + init_size, new_size - init_size);
		free(ptr);
		ptr = NULL;
	}
	return (new_memblock);
}
