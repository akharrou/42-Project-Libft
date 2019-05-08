# 42CLib

![logo]()

![Standard](https://img.shields.io/badge/Standard-ANSI%20C89-red.svg)
![Build Status](https://img.shields.io/badge/Build-Pass-lightred.svg)
![Norminette](https://img.shields.io/badge/Norminette-Pass-lightred.svg)
![License](https://img.shields.io/badge/License-MIT-blue.svg)

## Table of Content

1. [About](#about-libft)
2. [Norminette](#norminette)
3. [Install](#install)
	1. [local](#local)
	2. [global](#global)
4. [License](#license)

## About <a name="about-libft"></a>

**42CLib** is an open source **C** library with over **200 functions**.

#### It includes:

 * **Recreated Standard C Library functions** (`stdio`, `stdlib`, `string`, `ctype`, `math`)
 * **Implementations of Data Structures** (`binary trees`, `linked lists`, `stacks`, `queues`, `tries`, `hashtables`)
 * **Implementations of Sorting Algorithms** (`bubble sort`, `insertion sort`, `selection sort`, `merge sort`)
 * **Implementation of** `BigInt` (an infinitely big number type)
 * **Implementation of Bit Manipulation Functions**
 * **and more !**
 
>By developing this library, I gained a very deep and thorough understanding of the C Language and its Standard Library functions but also a great understanding of data structures, algorithms, unit testing, continuous integration, troubleshooting, and proper documentation.

## Norminette <a name="norminette"></a>

All library functions follow [42 Silicon Valley](https://www.42.us.org/)'s coding standard & style-guide: **Norminette**.

## Functions <a name="functions"></a>

For the sake of keeping everything neat and in order, I separated the functions'
declarations into different header files, corresponding to the behavior of
such functions.
For instance, ft_strlen can be found in ft_string.h.
Also, some of the functions included don't exist in the Standard C Library,
but I still kept them defined by there behavior.
For example, ft_strnew can also be in ft_string.h.

| stdio_42.h        | stdlib_42.h        | string_42.h     | ctype_42.h    | math_42.h      |
|:------------------|:-------------------|:----------------|:--------------|:---------------|
| [ft_printf](Stdio/ft_printf)         | [ft_atoi](Stdlib/ft_atoi)            | [ft_strnew](String/ft_strnew)       | [ft_isalnum](Ctype/ft_isalnum)    | [ft_max](Math/ft_max)         |
| [ft_dprintf](Stdio/ft_dprintf)        | [ft_atoi_base](Stdlib/ft_atoi_base)       | [ft_strclr](String/ft_strclr)       | [ft_isalpha](Ctype/ft_isalpha)    | [ft_min](Math/ft_min)         |
| [ft_sprintf](Stdio/ft_sprintf)        | [ft_itoa](Stdlib/ft_itoa)            | [ft_strdel](String/ft_strdel)       | [ft_isascii](Ctype/ft_isascii)    | [ft_pow](Math/ft_pow)         |
| [ft_asprintf](Stdio/ft_asprintf)       | [ft_ftoa](Stdlib/ft_ftoa)            | [ft_strrev](String/ft_strrev)       | [ft_isblank](Ctype/ft_isblank)    | [ft_powl](Math/ft_powl)        |
| [ft_vprintf](Stdio/ft_vprintf)        | [ft_itoa_base](Stdlib/ft_itoa_base)       | [ft_strmap](String/ft_strmap)       | [ft_iscntrl](Ctype/ft_iscntrl)    | [ft_powll](Math/ft_powll)       |
| [ft_vdprintf](Stdio/ft_vdprintf)       | [ft_utoa_base](Stdlib/ft_utoa_base)       | [ft_strmapi](String/ft_strmapi)      | [ft_isdigit](Ctype/ft_isdigit)    | [ft_sqrt](Math/ft_sqrt)        |
| [ft_vsprintf](Stdio/ft_vsprintf)       | [ft_ftoa_base](Stdlib/ft_ftoa_base)       | [ft_strequ](String/ft_strequ)       | [ft_isgraph](Ctype/ft_isgraph)    | [ft_round](Math/ft_round)       |
| [ft_vasprintf](Stdio/ft_vasprintf)      | [ft_dtoa_base](Stdlib/ft_dtoa_base)       | [ft_strnequ](String/ft_strnequ)      | [ft_islower](Ctype/ft_islower)    | [ft_sum](Math/ft_sum)         |
| [ft_readfile](Stdio/ft_readfile)       | [ft_ldtoa_base](Stdlib/ft_ldtoa_base)      | [ft_striter](String/ft_striter)      | [ft_isprime](Ctype/ft_isprime)    | [ft_sum_generic](Math/ft_sum_generic) |
| [ft_readline](Stdio/ft_readline)       | [ft_convert_base](Stdlib/ft_convert_base)    | [ft_striteri](String/ft_striteri)     | [ft_isprint](Ctype/ft_isprint)    |      .         |
|                   | [ft_malloc](Stdlib/ft_malloc)          | [ft_strchr](String/ft_strchr)       | [ft_ispunct](Ctype/ft_ispunct)    |      .         |
| [ft_putbits](Stdio/ft_putbits)        | [ft_realloc](Stdlib/ft_realloc)         | [ft_strchrs](String/ft_strchrs)      | [ft_isspace](Ctype/ft_isspace)    |      .         |
| [ft_putchar](Stdio/ft_putchar)        | [ft_bzero](Stdlib/ft_bzero)           | [ft_strrchr](String/ft_strrchr)      | [ft_isupper](Ctype/ft_isupper)    |      .         |
| [ft_putstr](Stdio/ft_putstr)         | [ft_memalloc](Stdlib/ft_memalloc)        | [ft_strstr](String/ft_strstr)       | [ft_ischarset](Ctype/ft_ischarset)  |      .         |
| [ft_putstrtab](Stdio/ft_putstrtab)      | [ft_memccpy](Stdlib/ft_memccpy)         | [ft_strnstr](String/ft_strnstr)      |               |      .         |
| [ft_putendl](Stdio/ft_putendl)        | [ft_memchr](Stdlib/ft_memchr)          | [ft_strcmp](String/ft_strcmp)       | [ft_tolower](Ctype/ft_tolower)    |      .         |
| [ft_putnbr](Stdio/ft_putnbr)         | [ft_memcmp](Stdlib/ft_memcmp)          | [ft_strncmp](String/ft_strncmp)      | [ft_toupper](Ctype/ft_toupper)    |      .         |
| [ft_putnbr_base](Stdio/ft_putnbr_base)    | [ft_memcpy](Stdlib/ft_memcpy)          | [ft_strcat](String/ft_strcat)       |      .        |      .         |
| [ft_putchar_fd](Stdio/ft_putchar_fd)     | [ft_memdel](Stdlib/ft_memdel)          | [ft_strncat](String/ft_strncat)      |      .        |      .         |
| [ft_putendl_fd](Stdio/ft_putendl_fd)     | [ft_memmove](Stdlib/ft_memmove)         | [ft_strlcat](String/ft_strlcat)      |      .        |      .         |
| [ft_putnbr_fd](Stdio/ft_putnbr_fd)      | [ft_memset](Stdlib/ft_memset)          | [ft_strcpy](String/ft_strcpy)       |      .        |      .         |
| [ft_putnbr_base_fd](Stdio/ft_putnbr_base_fd) | [ft_intlen](Stdlib/ft_intlen)          | [ft_strncpy](String/ft_strncpy)      |      .        |      .         |
| [ft_putstr_fd](Stdio/ft_putstr_fd)      | [ft_intmaxlen_base](Stdlib/ft_intmaxlen_base)  | [ft_strlcpy](String/ft_strlcpy)      |      .        |      .         |
| [ft_putstrtab_fd](Stdio/ft_putstrtab_fd)   | [ft_uintmaxlen_base](Stdlib/ft_uintmaxlen_base) | [ft_strcpy_until](String/ft_strcpy_until) |      .        |      .         |
| .                 | [ft_swap_char](Stdlib/ft_swap_char)       | [ft_strdup](String/ft_strdup)       |      .        |      .         |
| .                 | [ft_swap_int](Stdlib/ft_swap_int)        | [ft_strndup](String/ft_strndup)      |      .        |      .         |
| .                 | [ft_swap_item](Stdlib/ft_swap_item)       | [ft_strsub](String/ft_strsub)       |      .        |      .         |
| .                 | [ft_swap_str](Stdlib/ft_swap_str)        | [ft_strnlen](String/ft_strnlen)      |      .        |      .         |
| .                 | [ft_padding](Stdlib/ft_padding)         | [ft_strlen](String/ft_strlen)       |      .        |      .         |
| .                 | [ft_wcount](Stdlib/ft_wcount)          | [ft_strsplit](String/ft_strsplit)     |      .        |      .         |
| .                 | [ft_chrcount](Stdlib/ft_chrcount)        | [ft_strjoin](String/ft_strjoin)      |      .        |      .         |
| .                 | [ft_matrix_clear](Stdlib/ft_matrix_clear)    | [ft_strappend](String/ft_strappend)    |      .        |      .         |
| .                 | [ft_matrix_new](Stdlib/ft_matrix_new)      | [ft_strprepend](String/ft_strprepend)   |      .        |      .         |
| .                 | [ft_find_next_prime](Stdlib/ft_find_next_prime) | [ft_strnjoin](String/ft_strnjoin)     |      .        |      .         |
| .                 | .                  | [ft_strnappend](String/ft_strnappend)   |      .        |      .         |
| .                 | .                  | [ft_strnprepend](String/ft_strnprepend)  |      .        |      .         |
| .                 | .                  | [ft_strtrim](String/ft_strtrim)      |      .        |      .         |
| .                 | .                  | [ft_strstrip](String/ft_strstrip)     |      .        |      .         |
| .                 | .                  | [ft_strlstrip](String/ft_strlstrip)    |      .        |      .         |
| .                 | .                  | [ft_strrstrip](String/ft_strrstrip)    |      .        |      .         |
| .                 | .                  | [ft_strnlstrip](String/ft_strnlstrip)   |      .        |      .         |
| .                 | .                  | [ft_strnrstrip](String/ft_strnrstrip)   |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |
| .                 | .                  | .               |      .        |      .         |


## Install <a name="install"></a>

#### Local <a name="local"></a>

Copy the `includes/` directory into the root of your project, and
make sure to compile your source code with the following flags:

	gcc libft.a -I./includes <your_file.c> -o <output_name>

#### Global <a name="global"></a>

Run the following command :

	make install

Now you can add the `<libft.h>` header in your .c files!

----
## License <a name="license"></a>

This project is licensed under the MIT License - see [LICENSE](LICENSE/) for details.
