/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 09:07:32 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/01 15:48:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACROS_42_H
# define MACROS_42_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro Library Header(s).
*/

# include <limits.h>
# include <float.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Available Characters.
*/

# define DIGITS          "0123456789"
# define ALPHABET_LOWER  "abcdefghijklmnopqrstuvwxyz"
# define ALPHABET_UPPER  "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Base(s).
*/

# define BINARY_BASE     "01"
# define OCTAL_BASE      "01234567"
# define DECIMAL_BASE    "0123456789"
# define HEX_LOWER_BASE  "0123456789abcdef"
# define HEX_UPPER_BASE  "0123456789ABCDEF"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** File Types.
*/

# define UNKNOWN_FILE    DT_UNKNOWN
# define REGULAR_FILE    DT_REG
# define DIRECTORY       DT_DIR
# define SYMBOLIC_LINK   DT_LNK
# define NAMED_PIPE      DT_FIFO
# define SOCKET          DT_SOCK
# define BLOCK_FILE      DT_BLK
# define CHARACTER_FILE  DT_CHR

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Limit Constant(s).
*/

# ifndef HALFLINE_SIZE
#  define HALFLINE_SIZE (128)
# endif

# ifndef LINE_SIZE
#  define LINE_SIZE (256)
# endif

# ifndef CHUNK_SIZE
#  define CHUNK_SIZE (512)
# endif

# ifndef PAGE_SIZE
#  define PAGE_SIZE (4096)
# endif

# ifndef BUFF_SIZE
#  define BUFF_SIZE (1024)
# endif

# ifndef MAX_NAMELEN
#  define MAX_NAMELEN (__DARWIN_MAXNAMLEN)
# endif

# ifndef MAX_PATHLEN
#  define MAX_PATHLEN (__DARWIN_MAXPATHLEN)
# endif

# ifndef MAX_FDS
#  define MAX_FDS (65536)
# endif

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Aliase(s).
*/

# define STDIN  0
# define STDOUT 1
# define STDERR 2

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef NULL_
#  define NULL_ ((void *)0)
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

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Bit Manipulation
*/

# define ROTATE_8BITS_LEFT(x, n)    (((x) << (n)) | ((x) >> (8 - (n))))
# define ROTATE_8BITS_RIGHT(x, n)   (((x) >> (n)) | ((x) << (8 - (n))))

# define ROTATE_16BITS_LEFT(x, n)   (((x) << (n)) | ((x) >> (16 - (n))))
# define ROTATE_16BITS_RIGHT(x, n)  (((x) >> (n)) | ((x) << (16 - (n))))

# define ROTATE_32BITS_LEFT(x, n)   (((x) << (n)) | ((x) >> (32 - (n))))
# define ROTATE_32BITS_RIGHT(x, n)  (((x) >> (n)) | ((x) << (32 - (n))))

# define ROTATE_64BITS_LEFT(x, n)   (((x) << (n)) | ((x) >> (64 - (n))))
# define ROTATE_64BITS_RIGHT(x, n)  (((x) >> (n)) | ((x) << (64 - (n))))

# define ROTL_8BITS(x, n)   ROTATE_8BITS_LEFT(x, n)
# define ROTR_8BITS(x, n)   ROTATE_8BITS_RIGHT(x, n)

# define ROTL_16BITS(x, n)  ROTATE_16BITS_LEFT(x, n)
# define ROTR_16BITS(x, n)  ROTATE_16BITS_RIGHT(x, n)

# define ROTL_32BITS(x, n)  ROTATE_32BITS_LEFT(x, n)
# define ROTR_32BITS(x, n)  ROTATE_32BITS_RIGHT(x, n)

# define ROTL_64BITS(x, n)  ROTATE_64BITS_LEFT(x, n)
# define ROTR_64BITS(x, n)  ROTATE_64BITS_RIGHT(x, n)

# define ROTL_8B(x, n)   ROTATE_8BITS_LEFT(x, n)
# define ROTR_8B(x, n)   ROTATE_8BITS_RIGHT(x, n)

# define ROTL_16B(x, n)  ROTATE_16BITS_LEFT(x, n)
# define ROTR_16B(x, n)  ROTATE_16BITS_RIGHT(x, n)

# define ROTL_32B(x, n)  ROTATE_32BITS_LEFT(x, n)
# define ROTR_32B(x, n)  ROTATE_32BITS_RIGHT(x, n)

# define ROTL_64B(x, n)  ROTATE_64BITS_LEFT(x, n)
# define ROTR_64B(x, n)  ROTATE_64BITS_RIGHT(x, n)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Convenient Macro(s).
*/

# ifndef INT
#  define INT(c, base) (ft_strchr(base, c) - base)
# endif

# ifndef EXIT
#  define EXIT(func) { func; exit(EXIT_FAILURE); }
# endif

# ifndef FLUSH
#  define FLUSH(buffer) if (buffer != NULL) { free(buffer); buffer = NULL; }
# endif

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Guard/Check Macro(s).
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
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Type MAX & MIN Constants
*/

# ifndef CHAR_MIN
#  define CHAR_MIN (-128)
# endif

# ifndef CHAR_MAX
#  define CHAR_MAX (127)
# endif

# ifndef UCHAR_MAX
#  define UCHAR_MAX (255)
# endif

# ifndef SHORT_MIN
#  define SHORT_MIN (-32768)
# endif

# ifndef SHORT_MAX
#  define SHORT_MAX (32767)
# endif

# ifndef USHORT_MAX
#  define USHORT_MAX (65535)
# endif

# ifndef INT_MIN
#  define INT_MIN (-2147483648)
# endif

# ifndef INT_MAX
#  define INT_MAX (2147483647)
# endif

# ifndef UINT_MAX
#  define UINT_MAX (4294967295)
# endif

# ifndef LONG_MIN
#  define LONG_MIN (-9223372036854775808)
# endif

# ifndef LONG_MAX
#  define LONG_MAX (9223372036854775807)
# endif

# ifndef LLONG_MIN
#  define LLONG_MIN (-9223372036854775808)
# endif

# ifndef LLONG_MAX
#  define LLONG_MAX (9223372036854775807)
# endif

# ifndef ULONG_MAX
#  define ULONG_MAX (18446744073709551615)
# endif

# ifndef ULLONG_MAX
#  define ULLONG_MAX (18446744073709551615)
# endif

# ifndef FLT_MAX
#  define FLT_MAX (3.40282347e+38F)
# endif

# ifndef FLT_MIN
#  define FLT_MIN (1.17549435e-38F)
# endif

# ifndef DBL_MAX
#  define DBL_MAX (1.7976931348623157e+308)
# endif

# ifndef DBL_MIN
#  define DBL_MIN (2.2250738585072014e-308)
# endif

# ifndef LDBL_MAX
#  define LDBL_MAX (1.18973149535723176502e+4932L)
# endif

# ifndef LDBL_MIN
#  define LDBL_MIN (3.36210314311209350626e-4932L)
# endif

# ifndef SIZE_MAX
#  define SIZE_MAX (18446744073709551615)
# endif

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Bit Size MAX & MIN Constants
*/

# ifndef INT8_MAX
#  define INT8_MAX (127)
# endif

# ifndef INT8_MIN
#  define INT8_MIN (-INT8_MAX - 1)
# endif

# ifndef UINT8_MAX
#  define UINT8_MAX (255)
# endif

# ifndef INT16_MAX
#  define INT16_MAX (32767)
# endif

# ifndef INT16_MIN
#  define INT16_MIN (-INT16_MAX - 1)
# endif

# ifndef UINT16_MAX
#  define UINT16_MAX (65535)
# endif

# ifndef INT32_MAX
#  define INT32_MAX (2147483647)
# endif

# ifndef INT32_MIN
#  define INT32_MIN (-INT32_MAX - 1)
# endif

# ifndef UINT32_MAX
#  define UINT32_MAX (4294967295U)
# endif

# ifndef INT64_MAX
#  define INT64_MAX (9223372036854775807LL)
# endif

# ifndef INT64_MIN
#  define INT64_MIN (-INT64_MAX - 1)
# endif

# ifndef UINT64_MAX
#  define UINT64_MAX (18446744073709551615ULL)
# endif

# ifndef INT128_MAX
#  define INT128_MAX (0x80000000000000000000000000000000)
# endif

# ifndef INT128_MIN
#  define INT128_MIN (-INT128_MAX - 1)
# endif

# ifndef UINT128_MAX
#  define UINT128_MAX (0x100000000000000000000000000000000)
# endif

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
