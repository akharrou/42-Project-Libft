/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdint_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 12:03:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 12:08:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDINT_42_H
# define STDINT_42_H

# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>
# include <stdarg.h>

typedef unsigned char	*t_ptr;

typedef union			u_double
{
	double				val;
	char				body[sizeof(double)];
}						t_dbl;

typedef union			u_long_double
{
	long double			val;
	char				body[sizeof(long double)];
}						t_ldbl;

typedef struct			s_double
{
	bool				sign;
	short				exponent;
	uintmax_t			mantissa;
	t_dbl				dbl_;
}						t_double;

typedef struct			s_long_double
{
	bool				sign;
	short				exponent;
	uintmax_t			mantissa;
	t_ldbl				ldbl_;
}						t_long_double;

typedef union			u_data
{
	char				*str_;
	bool				bool_;
	signed char			char_;
	signed short		short_;
	signed int			int_;
	signed long			long_;
	signed long long	long_long_;
	unsigned char		uchar_;
	unsigned short		ushort_;
	unsigned int		uint_;
	unsigned long		ulong_;
	unsigned long long	ulong_long_;
	double				double_;
	long double			long_double_;
	t_dbl				dbl_;
	t_ldbl				ldbl_;
	intmax_t			intmax_;
	uintmax_t			uintmax_;
	intptr_t			intptr_;
	uintptr_t			uintptr_;
	ptrdiff_t			ptrdiff_;
	size_t				size_;
}						t_data;

#endif
