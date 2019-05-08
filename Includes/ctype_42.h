/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype_42.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:31:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/04 18:44:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CTYPE_42_H
# define CTYPE_42_H

# define ISBLANK(c) (c == ' ' || c == '\t')
# define ISSPACE(c) (ISBLANK (c) || c >= 10 && c <= 13)
# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ISLOWER(c) (c >= 'a' && c <= 'z')
# define ISUPPER(c) (c >= 'A' && c <= 'Z')
# define ISALPHA(c) (ISUPPER(c) || ISLOWER(c))
# define ISALNUM(c) (ISALPHA(c) || ISDIGIT(c))
# define ISPRINT(c) (c >= 32 && c <= 126)
# define ISGRAPH(c) (c >= 33 && c <= 126)
# define ISPUNCT(c) (ISGRAPH(c) && !ISALNUM(c))
# define ISCNTRL(c) (!ISPRINT(c))
# define ISASCII(c) (c >= 0 && <= 127)

# define ISGREATER(x, y)  (x > y)
# define ISLESSER(x, y)   (x < y)
# define ISEQUAL(x, y)    (x == y)

int	ft_isupper(int c);
int	ft_islower(int c);
int	ft_isblank(int c);
int	ft_isspace(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isgraph(int c);
int	ft_ispunct(int c);
int	ft_iscntrl(int c);
int	ft_isprint(int c);
int	ft_isprime(int n);
int	ft_ischarset(int c, const char *seperators);

int	ft_toupper(int c);
int	ft_tolower(int c);

#endif
