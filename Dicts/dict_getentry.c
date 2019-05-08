/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_getentry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 09:57:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/03/07 11:10:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/dict.h"

t_entry		*dict_getentry(t_hashtable *table, char *key)
{
	return (hashtab_getentry(table, key));
}
