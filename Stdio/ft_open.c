/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 07:47:48 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/18 07:56:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/stdio_42.h"

int		ft_open(char *filename, int oflag)
{
	int errno;
	int fd;

	errno = 0;
	fd = open(filename, oflag);
	if (fd < 0)
	{
		ft_printf("error: %s: %s", filename, strerror(errno));
		return (-1);
	}
	return (fd);
}
