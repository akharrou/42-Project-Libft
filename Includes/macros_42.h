/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 09:07:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/08 07:59:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_42_H
# define MACROS_42_H

/*
** Useful Macros
*/

# define INT(c, base) (ft_strchr(base, c) - base)

# define STDIN  0
# define STDOUT 1
# define STDERR 2

# define DIGITS          "0123456789"
# define ALPHABET_LOWER  "abcdefghijklmnopqrstuvwxyz"
# define ALPHABET_UPPER  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

# define BINARY_BASE     "01"
# define OCTAL_BASE      "01234567"
# define DECIMAL_BASE    "0123456789"
# define HEX_LOWER_BASE  "0123456789abcdef"
# define HEX_UPPER_BASE  "0123456789ABCDEF"

# ifndef BUFF_SIZE
#  define BUFF_SIZE 256
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef _NULL
#  define _NULL (void *)0
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# ifndef FAILURE
#  define FAILURE -1
# endif

# ifdef EXIT_SUCCESS
#  undef EXIT_SUCCESS
#  define EXIT_SUCCESS 0
# endif

# ifdef EXIT_FAILURE
#  undef EXIT_FAILURE
#  define EXIT_FAILURE 1
# endif

# ifndef EXIT
#  define EXIT(error_msg) { ft_putendl(error_msg); exit(EXIT_FAILURE); }
# endif

# ifndef FLUSH
#  define FLUSH(buffer) if (buffer != NULL) { free(buffer); buffer = NULL; }
# endif

/*
** Guard/Check Macros
*/

# ifndef ASSERT
#  define ASSERT(expr) (expr != FALSE)
# endif

# ifndef NULL_GUARD
#  define NULL_GUARD(expr, val) if (!(expr)) return (val)
# endif

# ifndef RETURN_CHECK
#  define RETURN_CHECK(expr, val) if (expr) return (val)
# endif

# ifndef BREAK_CHECK
#  define BREAK_CHECK(expr) if (expr) break
# endif

# ifndef CHECK
#  define CHECK(expr, err, errmsg) if (expr == err) { EXIT(errmsg) }
# endif

/*
** MAX & MINS
*/

# ifndef CHAR_MIN
#  define CHAR_MIN -128
# endif

# ifndef CHAR_MAX
#  define CHAR_MAX 127
# endif

# ifndef UCHAR_MAX
#  define UCHAR_MAX 255
# endif

# ifndef SHORT_MIN
#  define SHORT_MIN -32768
# endif

# ifndef SHORT_MAX
#  define SHORT_MAX 32767
# endif

# ifndef USHORT_MAX
#  define USHORT_MAX 65535
# endif

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# ifndef UINT_MAX
#  define UINT_MAX 4294967295
# endif

# ifndef LONG_MIN
#  define LONG_MIN -9223372036854775808
# endif

# ifndef LONG_MAX
#  define LONG_MAX 9223372036854775807
# endif

# ifndef LLONG_MIN
#  define LLONG_MIN -9223372036854775808
# endif

# ifndef LLONG_MAX
#  define LLONG_MAX 9223372036854775807
# endif

# ifndef ULONG_MAX
#  define ULONG_MAX 18446744073709551615
# endif

# ifndef ULLONG_MAX
#  define ULLONG_MAX 18446744073709551615
# endif

# ifndef SIZE_MAX
#  define SIZE_MAX 18446744073709551615
# endif

# ifndef FLT_MAX
#  define FLT_MAX 3.40282347e+38F
# endif

# ifndef FLT_MIN
#  define FLT_MIN 1.17549435e-38F
# endif

# ifndef DBL_MAX
#  define DBL_MAX 1.7976931348623157e+308
# endif

# ifndef DBL_MIN
#  define DBL_MIN 2.2250738585072014e-308
# endif

# ifndef LDBL_MAX
#  define LDBL_MAX 1.18973149535723176502e+4932L
# endif

# ifndef LDBL_MIN
#  define LDBL_MIN 3.36210314311209350626e-4932L
# endif

# ifndef MAX_FDS
#  define MAX_FDS 65536
# endif

#endif
