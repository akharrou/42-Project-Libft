/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   style_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:56:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/19 21:22:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/stdlib_42.h"
#include "../../../Includes/string_42.h"
#include "../../../Includes/ft_printf.h"

/*
**    DESCRIPTION
**         Dispatch 'g_styles_table' associates every style to its ANSI code.
**
**         Note:
**
**            - light colors are preceded with an 'l'.
**            - background colors are preceded with 'bg'.
**
**       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
**
**         How to specify a style in the format string ?
**
**               After the regular specifier format, append,
**               between two curly brackets '{}', all the
**               styles that you want to apply to the output,
**               by name, seperated by spaces.
**
**               Valid names of styles are only those found
**               in the styles dispatch table below.
**
**         Examples:
**
**             "%s{red bgwhite underlined}"
**
**             "%r{inversed bold}"
**
**             "%i{lblue bglgreen}"
**
**         Under the hood, ANSI code is prepended and appended
**         to the formatted string; it kinda looks like this:
**
**              \033[<code1>;<code2>; ... <codeN>m
*/

t_style g_styles_table[] =
{
	{ "default", "0" },
	\
	{ "underlined", "4" },
	{ "bold", "1" },
	{ "italic", "3" },
	{ "inverted", "7" },
	{ "dim", "2" },
	{ "hidden", "8" },
	\
	{ "black", "30" },
	{ "white", "97" },
	{ "gray", "90" },
	{ "red", "31" },
	{ "green", "32" },
	{ "yellow", "33" },
	{ "blue", "34" },
	{ "magenta", "35" },
	{ "cyan", "36" },
	{ "lgray", "37" },
	{ "lred", "91" },
	{ "lgreen", "92" },
	{ "lyellow", "93" },
	{ "lblue", "94" },
	{ "lmagenta", "95" },
	{ "lcyan", "96" },
	\
	{ "bgblack", "40" },
	{ "bgwhite", "107" },
	{ "bggray", "100" },
	{ "bgred", "41" },
	{ "bggreen", "42" },
	{ "bgyellow", "43" },
	{ "bgblue", "44" },
	{ "bgmagenta", "45" },
	{ "bgcyan", "46" },
	{ "bglgray", "47" },
	{ "bglred", "101" },
	{ "bglgreen", "102" },
	{ "bglyellow", "103" },
	{ "bglblue", "104" },
	{ "bglmagenta", "105" },
	{ "bglcyan", "106" },
	\
	{ NULL, NULL }
};

/*
**    NAME
**         style_handler -- formatted style conversion
**
**    SYNOPSIS
**         #include <libft.h>
**
**         char	*
**         style_handler(t_format format, char *string);
**
**    PARAMETERS
**
**         t_format format     Structure containing information about how
**                             the argument must be formatted in the string;
**                             also about how it must be styled.
**
**         t_data arg          Argument pulled off of the 'va_list'.
**
**         char *string        Output string that we want to style.
**
**    DESCRIPTION
**         Handles the 'style' specification of a formatted string.
**
**         Goes through the styles parsed 'format' variable and prepends
**         the corresponding ANSI code to the output string.
**
**         After having applied all styles, a reset ANSI code is appended
**         to the end of the output string.
**
**    RETURN VALUES
**         If style(s) were specified and successfully applied, the output
**         string, all styled up, is returned; otherwise the output string
**         untouched is returned.
*/

char		*style_handler(t_format format, char *string)
{
	char	*style;
	int8_t	i;
	int8_t	j;

	if (format.style == NULL)
		return (string);
	style = ft_strdup("\033[");
	i = -1;
	while (format.style[++i])
	{
		j = -1;
		while (g_styles_table[++j].style)
			if (ft_strcmp(format.style[i], g_styles_table[j].style) == 0)
			{
				style = ft_strappend(style, g_styles_table[j].ansi_code, 1, 0);
				if (format.style[i + 1] != NULL)
					style = ft_strappend(style, ";", 1, 0);
				free(format.style[i]);
				break ;
			}
	}
	free(format.style);
	style = ft_strappend(style, "m", 1, 0);
	string = ft_strprepend(string, style, 1, 1);
	return (ft_strappend(string, "\033[0m", 1, 0));
}
