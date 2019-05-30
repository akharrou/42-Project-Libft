/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmpstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 17:57:24 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/28 18:00:39 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

int		ft_cmpstr(void *a, void *b)
{
	return (ft_strcmp(*(char **)a, *(char **)b));
}

int		ft_reverse_cmpstr(void *a, void *b)
{
	return (-(ft_strcmp(*(char **)a, *(char **)b)));
}
