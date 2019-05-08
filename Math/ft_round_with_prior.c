/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round_with_prior.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:10:56 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/18 12:10:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double		ft_round_with_prior(long double n)
{
	n = (n < 0) ? -n : n;
	if ((unsigned long long)n % 10 >= 5)
		return ((n / 10) + 1);
	return (n / 10);
}
