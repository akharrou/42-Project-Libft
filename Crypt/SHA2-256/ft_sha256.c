/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha256.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:59:04 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 20:22:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    NAME
**         ft_sha256 -- calculate a message-digest fingerprint (checksum)
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char *
**         ft_sha256(void *data, int flag)
**
**    PARAMETERS
**
**         void *data       The address of a buffer or of an integer that
**                          represents a file descriptor.
**
**         int flag         The 'flag' argument indicates to what the
**                          'data' pointer points to. The avaible flags
**                          are:
**
**                             O_BUF   'data' points to a buffer
**                             O_FD    'data' points to a file descriptor
**
**                          Anything else is undefined behavior.
**
**    DESCRIPTION
**         The sha256 utility takes as input some data of arbitrary length
**         and produces as output a 'fingerprint' or 'message digest' of
**         the input.
**
**    RETURN VALUES
**         Returns a (256 bit) message-digest (non-hex) string.
*/

#include "ft_sha256.h"

char			*ft_sha256(void *data, int flag)
{
	t_sha256ctx	ctx;
	ssize_t		ret;
	char		*digest;

	sha256_init(&ctx);
	ret = 1;
	while (ret > 0)
	{
		ret = sha256_update(&ctx, &data, flag);
		if (ret >= 0)
			sha256_transform(&ctx);
	}
	if (ret < 0)
	{
		ft_printf("Error: %s{underlined}\n", strerror(errno));
		return (NULL);
	}
	sha256_final(&ctx, &digest);
	return (digest);
}
