/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_isany.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:30:26 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 10:30:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_str_isany -- search for an integer in a series of integers
**
**    SYNOPSIS
**         #include <libft.h>
**
**         int
**         ft_int_isany(int num1, int numbers, ...);
**
**    PARAMETERS
**
**         int num1             Integer to look for in the series
**                              of integers.
**
**         int numbers          Number of integers provided.
**
**         ...                  Series of integers in which to look for
**                              'num1'.
**
**    DESCRIPTION
**         Iterates through every integer in the series of integers provided
**         looking for 'num1'.
**
**    RETURN VALUES
**         If 'num1' is found, returns 1; otherwise 0.
*/

#include <stdarg.h>

int			ft_int_isany(int num1, int numbers, ...)
{
	va_list	ap;
	int		num2;

	va_start(ap, numbers);
	while (numbers-- > 0)
	{
		num2 = va_arg(ap, int);
		if (num1 == num2)
			return (1);
	}
	va_end(ap);
	return (0);
}
