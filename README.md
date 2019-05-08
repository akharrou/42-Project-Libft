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

**| Stdio_42         | Stdlib_42         | String_42      | Ctype_42     | Math_42       |**
|:------------------|:-------------------|:----------------|:--------------|:---------------|
| [ft_printf](Stdio/ft_printf.c)         | [ft_atoi](Stdlib/ft_atoi.c)            | [ft_strnew](String/ft_strnew.c)       | [ft_isalnum](Ctype/ft_isalnum.c)    | [ft_max](Math/ft_max.c)         |
| [ft_dprintf](Stdio/ft_dprintf.c)        | [ft_atoi_base](Stdlib/ft_atoi_base.c)       | [ft_strclr](String/ft_strclr.c)       | [ft_isalpha](Ctype/ft_isalpha.c)    | [ft_min](Math/ft_min.c)         |
| [ft_sprintf](Stdio/ft_sprintf.c)        | [ft_itoa](Stdlib/ft_itoa.c)            | [ft_strdel](String/ft_strdel.c)       | [ft_isascii](Ctype/ft_isascii.c)    | [ft_pow](Math/ft_pow.c)         |
| [ft_asprintf](Stdio/ft_asprintf.c)       | [ft_ftoa](Stdlib/ft_ftoa.c)            | [ft_strrev](String/ft_strrev.c)       | [ft_isblank](Ctype/ft_isblank.c)    | [ft_powl](Math/ft_powl.c)        |
| [ft_vprintf](Stdio/ft_vprintf.c)        | [ft_itoa_base](Stdlib/ft_itoa_base.c)       | [ft_strmap](String/ft_strmap.c)       | [ft_iscntrl](Ctype/ft_iscntrl.c)    | [ft_powll](Math/ft_powll.c)       |
| [ft_vdprintf](Stdio/ft_vdprintf.c)       | [ft_utoa_base](Stdlib/ft_utoa_base.c)       | [ft_strmapi](String/ft_strmapi.c)      | [ft_isdigit](Ctype/ft_isdigit.c)    | [ft_sqrt](Math/ft_sqrt.c)        |
| [ft_vsprintf](Stdio/ft_vsprintf.c)       | [ft_ftoa_base](Stdlib/ft_ftoa_base.c)       | [ft_strequ](String/ft_strequ.c)       | [ft_isgraph](Ctype/ft_isgraph.c)    | [ft_round](Math/ft_round.c)       |
| [ft_vasprintf](Stdio/ft_vasprintf.c)      | [ft_dtoa_base](Stdlib/ft_dtoa_base.c)       | [ft_strnequ](String/ft_strnequ.c)      | [ft_islower](Ctype/ft_islower.c)    | [ft_sum](Math/ft_sum.c)         |
| [ft_readfile](Stdio/ft_readfile.c)       | [ft_ldtoa_base](Stdlib/ft_ldtoa_base.c)      | [ft_striter](String/ft_striter.c)      | [ft_isprime](Ctype/ft_isprime.c)    | [ft_sum_generic](Math/ft_sum_generic.c) |
| [ft_readline](Stdio/ft_readline.c)       | [ft_convert_base](Stdlib/ft_convert_base.c)    | [ft_striteri](String/ft_striteri.c)     | [ft_isprint](Ctype/ft_isprint.c)    |               |
|                   | [ft_malloc](Stdlib/ft_malloc.c)          | [ft_strchr](String/ft_strchr.c)       | [ft_ispunct](Ctype/ft_ispunct.c)    |               |
| [ft_putbits](Stdio/ft_putbits.c)        | [ft_realloc](Stdlib/ft_realloc.c)         | [ft_strchrs](String/ft_strchrs.c)      | [ft_isspace](Ctype/ft_isspace.c)    |               |
| [ft_putchar](Stdio/ft_putchar.c)        | [ft_bzero](Stdlib/ft_bzero.c)           | [ft_strrchr](String/ft_strrchr.c)      | [ft_isupper](Ctype/ft_isupper.c)    |               |
| [ft_putstr](Stdio/ft_putstr.c)         | [ft_memalloc](Stdlib/ft_memalloc.c)        | [ft_strstr](String/ft_strstr.c)       | [ft_ischarset](Ctype/ft_ischarset.c)  |               |
| [ft_putstrtab](Stdio/ft_putstrtab.c)      | [ft_memccpy](Stdlib/ft_memccpy.c)         | [ft_strnstr](String/ft_strnstr.c)      |               |               |
| [ft_putendl](Stdio/ft_putendl.c)        | [ft_memchr](Stdlib/ft_memchr.c)          | [ft_strcmp](String/ft_strcmp.c)       | [ft_tolower](Ctype/ft_tolower.c)    |               |
| [ft_putnbr](Stdio/ft_putnbr.c)         | [ft_memcmp](Stdlib/ft_memcmp.c)          | [ft_strncmp](String/ft_strncmp.c)      | [ft_toupper](Ctype/ft_toupper.c)    |               |
| [ft_putnbr_base](Stdio/ft_putnbr_base.c)    | [ft_memcpy](Stdlib/ft_memcpy.c)          | [ft_strcat](String/ft_strcat.c)       |              |               |
| [ft_putchar_fd](Stdio/ft_putchar_fd.c)     | [ft_memdel](Stdlib/ft_memdel.c)          | [ft_strncat](String/ft_strncat.c)      |              |               |
| [ft_putendl_fd](Stdio/ft_putendl_fd.c)     | [ft_memmove](Stdlib/ft_memmove.c)         | [ft_strlcat](String/ft_strlcat.c)      |              |               |
| [ft_putnbr_fd](Stdio/ft_putnbr_fd.c)      | [ft_memset](Stdlib/ft_memset.c)          | [ft_strcpy](String/ft_strcpy.c)       |              |               |
| [ft_putnbr_base_fd](Stdio/ft_putnbr_base_fd.c) | [ft_intlen](Stdlib/ft_intlen.c)          | [ft_strncpy](String/ft_strncpy.c)      |              |               |
| [ft_putstr_fd](Stdio/ft_putstr_fd.c)      | [ft_intmaxlen_base](Stdlib/ft_intmaxlen_base.c)  | [ft_strlcpy](String/ft_strlcpy.c)      |              |               |
| [ft_putstrtab_fd](Stdio/ft_putstrtab_fd.c)   | [ft_uintmaxlen_base](Stdlib/ft_uintmaxlen_base.c) | [ft_strcpy_until](String/ft_strcpy_until.c) |              |               |
|                  | [ft_swap_char](Stdlib/ft_swap_char.c)       | [ft_strdup](String/ft_strdup.c)       |              |               |
|                  | [ft_swap_int](Stdlib/ft_swap_int.c)        | [ft_strndup](String/ft_strndup.c)      |              |               |
|                  | [ft_swap_item](Stdlib/ft_swap_item.c)       | [ft_strsub](String/ft_strsub.c)       |              |               |
|                  | [ft_swap_str](Stdlib/ft_swap_str.c)        | [ft_strnlen](String/ft_strnlen.c)      |              |               |
|                  | [ft_padding](Stdlib/ft_padding.c)         | [ft_strlen](String/ft_strlen.c)       |              |               |
|                  | [ft_wcount](Stdlib/ft_wcount.c)          | [ft_strsplit](String/ft_strsplit.c)     |              |               |
|                  | [ft_chrcount](Stdlib/ft_chrcount.c)        | [ft_strjoin](String/ft_strjoin.c)      |              |               |
|                  | [ft_matrix_clear](Stdlib/ft_matrix_clear.c)    | [ft_strappend](String/ft_strappend.c)    |              |               |
|                  | [ft_matrix_new](Stdlib/ft_matrix_new.c)      | [ft_strprepend](String/ft_strprepend.c)   |              |               |
|                  | [ft_find_next_prime](Stdlib/ft_find_next_prime.c) | [ft_strnjoin](String/ft_strnjoin.c)     |              |               |
|                  |                   | [ft_strnappend](String/ft_strnappend.c)   |              |               |
|                  |                   | [ft_strnprepend](String/ft_strnprepend.c)  |              |               |
|                  |                   | [ft_strtrim](String/ft_strtrim.c)      |              |               |
|                  |                   | [ft_strstrip](String/ft_strstrip.c)     |              |               |
|                  |                   | [ft_strlstrip](String/ft_strlstrip.c)    |              |               |
|                  |                   | [ft_strrstrip](String/ft_strrstrip.c)    |              |               |
|                  |                   | [ft_strnlstrip](String/ft_strnlstrip.c)   |              |               |
|                  |                   | [ft_strnrstrip](String/ft_strnrstrip.c)   |              |               |
|                  |                   |                |              |               |




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
