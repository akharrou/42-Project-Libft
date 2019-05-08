/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_compare.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:53:44 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/05 21:59:33 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"
#include "../Includes/stdlib_42.h"

#include "../Includes/bigint.h"

int			bigint_compare(t_bigint operand_1, t_bigint operand_2)
{
	int8_t	ret;

	operand_1 = ft_strdup(operand_1);
	operand_2 = ft_strdup(operand_2);
	if (!operand_1 || !operand_2)
		return (0);
	bigint_normalizer(&operand_1, &operand_2);
	if (!(operand_1[0] == '-') && (operand_2[0] == '-'))
		ret = 1;
	else if ((operand_1[0] == '-') && !(operand_2[0] == '-'))
		ret = -1;
	else if ((operand_1[0] == '-') && (operand_2[0] == '-'))
		ret = -ft_strcmp(operand_1, operand_2);
	else
		ret = ft_strcmp(operand_1, operand_2);
	free(operand_1);
	free(operand_2);
	if (ret == 0)
		return (0);
	return ((ret > 0) ? 1 : -1);
}
