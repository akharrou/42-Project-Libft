# Open Libft

![logo](resources/libft-logo.svg.png)

![Standard](https://img.shields.io/badge/Standard-ANSI%20C89-red.svg)
![Build Status](https://img.shields.io/badge/Build-Pass-lightred.svg)
![Norminette](https://img.shields.io/badge/Norminette-Pass-lightred.svg)
![License](https://img.shields.io/badge/License-MIT-blue.svg)

## Table of Content

1. [About Open Libft](#about-libft)
2. [Norminette](#norminette)
3. [Functions](#functions)
4. [Setup](#setup)
5. [Install](#install)
	1. [local](#local)
	2. [global](#global)
7. [License](#license)

## About Open Libft <a name="about-libft"></a>

An open source library with over **200 functions**.

#### It includes:

> * **Recreated Standard C Library functions** (`stdio`, `stdlib`, `string`)
> 
> * **Data-structure functions** (binary tree, linked list / stack / queue, trie, hashtable/dictionary)
> 
> * An **implementation of `BigInt`** _(an infinetly big number type)_
> 
> * Other functions such as bit manipulation functions, and more

By developing this library, I gained very understanding of data structures, algorithms,
unit testing, continuous integration, troubleshooting, and proper documentation.

## Norminette <a name="norminette"></a>

All of these functions follows the applicable styleguide standard (the norm).

*Read the pdf provided to learn more:* `resources/norminette.pdf`.

To install norminette, run the following commands:
* `gem install norminette --pre`
* `gem install --user-install json -v 1.8.3`

Run it in the following way:
* `norminette <path-to-c-files>`

## Functions <a name="functions"></a>

For the sake of keeping everything neat and in order, I separated the functions'
declarations into different header files, corresponding to the behavior of
such functions.
For instance, ft_strlen can be found in ft_string.h.
Also, some of the functions included don't exist in the Standard C Library,
but I still kept them defined by there behavior.
For example, ft_strnew can also be in ft_string.h.

Header File          | List of Functions
:--------------------|:----------
**btree.h**          | btree_create_node, btree_level_count, btree_add_node, btree_apply_infix, btree_apply_suffix, btree_apply_prefix, btree_search_item
**ft_math.h**        | ft_abs, ft_min, ft_min, ft_isprime, ft_sqrt, ft_trunc, ft_ceil, ft_round, ft_floor, ft_pow, ft_hypot, ft_sqrtl, ft_truncl, ft_ceill, ft_roundl, ft_floorl, ft_powl, ft_hypotl, ft_collatz_conjecture, ft_nextprime, ft_nbrlen, ft_factorial, ft_fibonacci, ft_find_next_prime
**ft_list.h**        | ft_lstfree, ft_lstadd, ft_lstaddback, ft_lstappend, ft_lstiter, ft_lstdel, ft_lstdelone, ft_lstreverse, ft_lstnew, ft_lstmap
**ft_wchar.h**       | ft_wclen, ft_putwchar, ft_putwchar_fd, ft_putwstr, ft_putwstr_fd, ft_wcslen, ft_wcsdup, ft_wcscpy, ft_wcsnew, ft_wcsncpy
**ft_array.h**       | ft_array_max_value, ft_array_new, ft_array_copy, ft_array_rotate_left, ft_array_rotate_right, ft_array_pop, ft_array_do_op, ft_array_delete, ft_array_print, ft_array_bubble_sort, ft_array_insertion_sort, ft_array_repeated_count
**ft_stack.h**       | ft_stck_show, ft_stck_push, ft_stck_pop
**ft_errno.h**       | ft_errno, ft_strerror
**ft_ctype.h**       | ft_isascii, ft_isalnum, ft_isalpha, ft_isblank, ft_iscntrl, ft_isdigit, ft_isgraph, ft_islower, ft_isspace, ft_tolower, ft_toupper, ft_isprint, ft_ispunct, ft_isupper, ft_islower, ft_isxdigit, ft_iswspace, ft_ismathop
**ft_stdio.h**       | ft_putchar, ft_putchar_fd, ft_putnchar, ft_putnchar_fd, t_putstr, t_putstr_fd, ft_putendl, ft_putendl_fd, ft_putnbr, ft_putnbr_fd, ft_putnbr_base, ft_putnbr_base_fd, ft_putunbr, ft_putnstr, ft_putnstr_fd
**ft_matrix.h**      | ft_matrix_new, ft_matrix_delete
**ft_printf.h**      | ft_printf, parse_specifier, print_spaces, get_attributes, get_nbr_zeroes, get_nbr_spaces, get_nbr_unsigned, format_signed, format_unsigned, print_string, print_wide_string, print_hexadecimal, print_decimal, print_octal, print_character, print_wide_character, print_binary
**ft_stdlib.h**      | ft_atoi, ft_atoi_base, ft_itoa, ft_itoa_base, ft_realloc, ft_calloc
**ft_string.h**      | ft_strequ, ft_strnequ, ft_memcmp, ft_strcmp, ft_strncmp, ft_strcat, t_strncat, ft_strchr, ft_strrchr, ft_strnchr, ft_strcpy, ft_strncpy, ft_strstr, ft_strnstr, ft_strdup, ft_strndup, ft_strnew, ft_strjoin, ft_strmap, ft_strmapi, ft_strrev, ft_strsub, ft_strtrim, ft_strtok, ft_strsplit, ft_strclr, ft_strdel, ft_striter, ft_striteri, ft_memdel, ft_memcpy, ft_memccpy, ft_memchr, ft_memmove, ft_memset, ft_memalloc, ft_strlen, ft_strnlen, ft_strlcat, ft_strlcpy
**ft_strings.h**     | ft_bzero
**ft_classics.h**  | ft_active_bits, ft_angle_to_degrees, ft_compact, ft_is_big_endian, ft_is_little_endian, ft_str_is_lowercase, ft_str_is_numeric, ft_str_is_printable, ft_str_is_uppercase, ft_str_is_palindrome, ft_str_starts_with, ft_str_ends_with, ft_do_op, ft_file_extension, ft_str_capitalize, ft_str_to_upcase, ft_str_to_lowcase, ft_program_name, ft_remove_extension, ft_str_remove_whitespace, ft_separated_values, ft_swap, ft_textstyle, ft_textstyle_reset, ft_puterror, ft_puterror_fd, ft_nbrcount, ft_wordcount, ft_wordlen, ft_char_count, ft_values_count
**get_next_line.h**  | get_next_line


## Setup <a name="setup"></a>

Download the repository, and compile the library using the Makefile.
You can use the following commands:

Command       |  Description
:-------------|:-------------
`make`        | Compile the library.
`make clean`  | Remove objects files.
`make fclean` | Remove objects files and the library.
`make re`     | Re-compile the library.
`make install`| Install the library.

The binary `libft.a` will be created at the root of the project's directory.

## Install <a name="install"></a>

### Local <a name="local"></a>

Copy the `includes/` directory into the root of your project, and
make sure to compile your source code with the following flags:

	gcc libft.a -I./includes <your_file.c> -o <output_name>

### Global <a name="global"></a>

Run the following command :

	make install

Now you can add the `<libft.h>` header in your .c files!

## License <a name="license"></a>

This project is licensed under the MIT License - see the [LICENSE](LICENSE/)
file for details.
