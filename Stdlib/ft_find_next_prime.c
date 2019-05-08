/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 08:14:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/30 10:26:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/ctype_42.h"
#include "../Includes/macros_42.h"

int		ft_find_next_prime(int n)
{
	if (n % 2 == 0)
		n++;
	else
		n += 2;
	while (!ft_isprime(n))
		n += 2;
	return (n);
}
