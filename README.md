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

| stdio_42.h        | stdlib_42.h        | string_42.h | ctype_42.h | math_42.h | btree.h | list.h |
|:------------------|:-------------------|:------------|:-----------|:----------|:--------|:-------|
| ft_printf         | ft_atoi            |      .      |      .     |      .    |     .   |    .   |
| ft_dprintf        | ft_atoi_base       |      .      |      .     |      .    |     .   |    .   |
| ft_sprintf        | ft_itoa            |      .      |      .     |      .    |     .   |    .   |
| ft_asprintf       | ft_ftoa            |      .      |      .     |      .    |     .   |    .   |
| ft_vprintf        | ft_itoa_base       |      .      |      .     |      .    |     .   |    .   |
| ft_vdprintf       | ft_utoa_base       |      .      |      .     |      .    |     .   |    .   |
| ft_vsprintf       | ft_ftoa_base       |      .      |      .     |      .    |     .   |    .   |
| ft_vasprintf      | ft_dtoa_base       |      .      |      .     |      .    |     .   |    .   |
| ft_readfile       | ft_ldtoa_base      |      .      |      .     |      .    |     .   |    .   |
| ft_readline       | ft_convert_base    |      .      |      .     |      .    |     .   |    .   |
|                   | ft_malloc          |      .      |      .     |      .    |     .   |    .   |
| ft_putbits        | ft_realloc         |      .      |      .     |      .    |     .   |    .   |
| ft_putchar        | ft_bzero           |      .      |      .     |      .    |     .   |    .   |
| ft_putstr         | ft_memalloc        |      .      |      .     |      .    |     .   |    .   |
| ft_putstrtab      | ft_memccpy         |      .      |      .     |      .    |     .   |    .   |
| ft_putendl        | ft_memchr          |      .      |      .     |      .    |     .   |    .   |
| ft_putnbr         | ft_memcmp          |      .      |      .     |      .    |     .   |    .   |
| ft_putnbr_base    | ft_memcpy          |      .      |      .     |      .    |     .   |    .   |
| ft_putchar_fd     | ft_memdel          |      .      |      .     |      .    |     .   |    .   |
| ft_putendl_fd     | ft_memmove         |      .      |      .     |      .    |     .   |    .   |
| ft_putnbr_fd      | ft_memset          |      .      |      .     |      .    |     .   |    .   |
| ft_putnbr_base_fd | ft_intlen          |      .      |      .     |      .    |     .   |    .   |
| ft_putstr_fd      | ft_intmaxlen_base  |      .      |      .     |      .    |     .   |    .   |
| ft_putstrtab_fd   | ft_uintmaxlen_base |      .      |      .     |      .    |     .   |    .   |
|                   | ft_swap_char       |      .      |      .     |      .    |     .   |    .   |
|                   | ft_swap_int        |      .      |      .     |      .    |     .   |    .   |
|                   | ft_swap_item       |      .      |      .     |      .    |     .   |    .   |
|                   | ft_swap_str        |      .      |      .     |      .    |     .   |    .   |
|                   | ft_padding         |      .      |      .     |      .    |     .   |    .   |
|                   | ft_wcount          |      .      |      .     |      .    |     .   |    .   |
|                   | ft_chrcount        |      .      |      .     |      .    |     .   |    .   |
|                   | ft_matrix_clear    |      .      |      .     |      .    |     .   |    .   |
|                   | ft_matrix_new      |      .      |      .     |      .    |     .   |    .   |
|                   | ft_find_next_prime |      .      |      .     |      .    |     .   |    .   |
|                   |     .              |      .      |      .     |      .    |     .   |    .   |




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
