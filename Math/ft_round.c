/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:13:05 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/18 14:13:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long double		ft_round(long double n)
{
	int sign;

	sign = (n < 0);
	n = (n < 0) ? -n : n;
	if ((unsigned long long)n - n >= 0.5)
	{
		n = n - (unsigned long long)n;
		if (sign)
			return (-n - 1);
		return (n + 1);
	}
	n = n - (unsigned long long)n;
	if (sign)
		return (-n);
	return (n);
}
