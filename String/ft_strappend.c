/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:11:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/04/18 19:11:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/string_42.h"

char	*ft_strappend(char const *s1, char const *s2, int free_s1, int free_s2)
{
	return (ft_strjoinfre(s1, s2, free_s1, free_s2));
}
