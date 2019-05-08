/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 23:27:19 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/26 23:26:02 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strnappend(char const *s1, char const *s2, size_t len, int free_str)
{
	return (ft_strnjoinfre(s1, s2, len, free_str));
}
