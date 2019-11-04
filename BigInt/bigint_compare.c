/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_compare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:53:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/11/02 21:32:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"

#include "../Includes/bigint.h"

int			bigint_compare(t_bigint lhs, t_bigint rhs)
{
	int8_t	ret;

	lhs = ft_strdup(lhs);
	rhs = ft_strdup(rhs);
	if (!lhs || !rhs)
		return (0);
	bigint_normalizer(&lhs, &rhs);
	if (!(lhs[0] == '-') && (rhs[0] == '-'))
		ret = 1;
	else if ((lhs[0] == '-') && !(rhs[0] == '-'))
		ret = -1;
	else if ((lhs[0] == '-') && (rhs[0] == '-'))
		ret = -ft_strcmp(lhs, rhs);
	else
		ret = ft_strcmp(lhs, rhs);
	free(lhs);
	free(rhs);
	if (ret == 0)
		return (0);
	return ((ret > 0) ? 1 : -1);
}
