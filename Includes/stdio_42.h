/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_42.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:39:25 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/18 07:56:41 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDIO_42_H
# define STDIO_42_H

# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

int		ft_printf(const char *format, ...);
int		ft_dprintf(int filedes, const char *format, ...);
int		ft_sprintf(char *str, const char *format, ...);
int		ft_asprintf(char **ret, const char *format, ...);

int		ft_vprintf(const char *format, va_list *args);
int		ft_vdprintf(int filedes, const char *format, va_list *args);
int		ft_vsprintf(char *str, const char *format, va_list *args);
int		ft_vasprintf(char **ret, const char *format, va_list *args);

void	ft_putbits(unsigned long long num, int n_bits);
void	ft_putbyte(int c);
void	ft_putbyte_fd(int c, int fd);
void	ft_putbytes(const char *byte_str);
void	ft_putbytes_fd(const char *byte_str, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstrtab(char **tab, char sep);
void	ft_putstrtab_fd(char **tab, char sep, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr_base_fd(int nbr, char *base, int fd);

int		ft_readline(const int fd, char **line);
char	*ft_readfile(char *filename);
char	*ft_readfiledes(int filedes);

int		ft_open(char *filename, int oflag);

#endif
