/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdint_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 12:03:50 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 13:16:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDINT_42_H
# define STDINT_42_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Header File(s).
*/

# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>
# include <stdarg.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Simple Pointer.
*/

typedef unsigned char	*t_ptr;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Units Type(s).
*/

typedef struct	s_bit
{
	int8_t	bit : 1;
}				t_bit;

typedef struct	s_byte
{
	int8_t	byte;
}				t_byte;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Floating Point Type(s).
*/

typedef union			u_float
{
	float				val;
	char				body[sizeof(float)];
}						t_flt;

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

typedef struct			s_float
{
	bool				sign;
	short				exponent;
	uintmax_t			mantissa;
	t_flt				flt_;
}						t_float;

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

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Polymorphic Type(s).
*/

typedef union			u_data
{
	int					*iptr_;
	char				*str_;
	void				*vptr_;
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

typedef union			u_integer
{
	bool				bool_;
	\
	uint8_t				char_;
	uint16_t			short_;
	uint32_t			int_;
	uint64_t			long_;
	__uint128_t			long_long_;
	\
	int8_t				ushort_;
	int16_t				uint_;
	int32_t				ulong_;
	int64_t				ulong_long_;
	__int128_t			uchar_;
	\
	intmax_t			intmax_;
	uintmax_t			uintmax_;
	intptr_t			intptr_;
	uintptr_t			uintptr_;
	ptrdiff_t			ptrdiff_;
	size_t				size_;
	\
	float				flt_;
	double				dbl_;
	long double			ldbl_;
	\
}						t_integer;

typedef union			u_decimal
{
	float				flt_;
	double				dbl_;
	long double			ldbl_;
}						t_decimal;

typedef union			u_number
{
	bool				bool_;
	\
	uint8_t				char_;
	uint16_t			short_;
	uint32_t			int_;
	uint64_t			long_;
	__uint128_t			long_long_;
	\
	int8_t				ushort_;
	int16_t				uint_;
	int32_t				ulong_;
	int64_t				ulong_long_;
	__int128_t			uchar_;
	\
	intmax_t			intmax_;
	uintmax_t			uintmax_;
	intptr_t			intptr_;
	uintptr_t			uintptr_;
	ptrdiff_t			ptrdiff_;
	size_t				size_;
	\
	float				flt_;
	double				dbl_;
	long double			ldbl_;
}						t_number;

#endif
