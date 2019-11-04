/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:48:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/02 21:32:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/bigint.h"

t_bigint	bigint_min(t_bigint lhs, t_bigint rhs)
{
	if (bigint_compare(lhs, rhs) >= 0)
		return (rhs);
	else
		return (lhs);
}
