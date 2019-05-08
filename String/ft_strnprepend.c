/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnprepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 23:26:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/26 23:25:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strnprepend(char const *s1, char const *s2, size_t len,
			int free_str)
{
	return (ft_strnjoinfre(s2, s1, len, free_str));
}
