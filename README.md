# 42CLib

![logo](resources/libft-logo.svg.png)

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

It includes:

 * **Recreated Standard C Library functions** _(`stdio`, `stdlib`, `string`, `ctype`, `math`)_
 * **Implementation of Data Structures** (`binary trees`, `linked lists`, `stacks`, `queues`, `tries`, `hashtables`)
 * **Implementation of** `BigInt` (an infinetly big number type)
 * **Bit Manipulation Functions**
 * **and more !**
 
By developing this library, I gained very deep and thorough understanding of the C Language, its Standard Library functions and also of data structures, algorithms, unit testing, continuous integration, troubleshooting, and proper documentation.

## Norminette <a name="norminette"></a>

All library functions follow [42 Silicon Valley](https://www.42.us.org/)'s coding standard & style-guide: **Norminette**.

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
