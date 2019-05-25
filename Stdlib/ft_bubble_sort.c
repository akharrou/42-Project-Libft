/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:25:01 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 12:44:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_bubble_sort -- sort a vector by ascending order
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_bubble_sort(void *vector, size_t length, size_t width,
**             int (*cmp)(void *, void *));
**
**    PARAMETERS
**
**
**
**
**
**
**    DESCRIPTION
**         Description.
**
**    RETURN VALUES
**         If successful returns 0; otherwise -1.
*/

#include "../Includes/stdlib_42.h"
#include "../Includes/stdint_42.h"

int			ft_bubble_sort(void *vector, size_t length, size_t width,
				int (*cmp)(void *, void *))
{
	int		unordered;
	void	*tmp;
	size_t	len;
	size_t	i;

	if (!(tmp = (void *)malloc(width)))
		return (-1);
	unordered = 1;
	while (unordered)
	{
		i = 0;
		unordered = 0;
		len = (length - 1);
		while (i < len)
		{
			if (cmp(&(vector[i]), &(vector[i + 1])) > 0)
			{
				ft_swap_mem(&(vector[i]), &(vector[i + 1]), tmp, width);
				++unordered;
			}
			++i;
		}
		--length;
	}
	free(tmp);
	return (0);
}


#include "../Includes/libft.h"

int		compare(void *a, void *b)
{
	return (*(intmax_t *)(a) <= *(intmax_t *)(b));
}

int		main(void)
{

	t_uvector	ages;

	ages = uvector.constructor(1);
	ages.extend(&ages, 10, 7, 2, 9, 4, 1, 0, 3, 5, 8, 6);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%3i: %ji, ", i, ages.uvector[i]); }
	ft_printf("\n\n");

	ft_bubble_sort(ages.uvector, ages.length, sizeof(intmax_t), &compare);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%3i: %ji, ", i, ages.uvector[i]); }
	ft_printf("\n\n");

	return (0);
}
