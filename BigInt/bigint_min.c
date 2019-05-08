/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:48:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/05 17:49:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/bigint.h"

t_bigint	bigint_min(t_bigint operand_1, t_bigint operand_2)
{
	if (bigint_compare(operand_1, operand_2) >= 0)
		return (operand_2);
	else
		return (operand_1);
}
