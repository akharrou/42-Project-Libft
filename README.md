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

| stdio_42.h         | stdlib_42.h | string_42.h | ctype_42.h | math_42.h | btree.h | list.h |
|:------------------|:------------|:------------|:-----------|:----------|:--------|:-------|
| [ft_printf](Stdio/ft_printf.c)          |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_dprintf](Stdio/ft_dprintf.c)         |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_sprintf](Stdio/ft_sprintf.c)         |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_asprintf](Stdio/ft_asprintf.c)        |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_vprintf](Stdio/ft_vprintf.c)         |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_vdprintf](Stdio/ft_vdprintf.c)        |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_vsprintf](Stdio/ft_vsprintf.c)        |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_vasprintf](Stdio/ft_vasprintf.c)       |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_readfile](Stdio/ft_readfile.c)        |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_readline](Stdio/ft_readline.c)        |     .       |      .      |      .     |      .    |     .   |    .   |
| [ft_putbits](Stdio/ft_putbits.c)         |     .       |      .      |      .     |      .    |     .   |    .   |


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
