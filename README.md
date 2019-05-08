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

 * **Recreated Standard C Library functions** _(`stdio`, `stdlib`, `string`)_
 
 * **Implementation of Data Structures** (binary trees, linked lists, stacks, queues, tries, hashtables/dictionaries)
 
 * **Implementation of** `BigInt` (an infinetly big number type)
 
 * **Bit Manipulation Functions**
 
 * **and more !**
 
By developing this library, I gained very understanding of data structures, algorithms,
unit testing, continuous integration, troubleshooting, and proper documentation.

## Norminette <a name="norminette"></a>

All of these functions follow the coding standard & style-guide of [42 Silicon Valley](https://www.42.us.org/) dubbed: **"Norminette"**.

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
