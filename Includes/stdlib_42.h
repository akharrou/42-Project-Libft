/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdlib_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:35:17 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/27 09:00:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDLIB_42_H
# define STDLIB_42_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Header File(s).
*/

# include <stdlib.h>
# include <string.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Memory Function(s).
*/

void			*ft_malloc(size_t size, char c);
void			*ft_realloc(void *ptr, size_t init_size, size_t new_size);

void			ft_bzero(void *str, size_t n);
void			ft_bnull(void **array, size_t n);

void			*ft_memalloc(size_t size);
void			*ft_memset(void *dst, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memdup(void *ptr, size_t size);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *dst, const void *src, size_t n);
void			ft_memdel(void **ap);
void			ft_memset_addr(void **buf, int c, size_t len);
void			ft_memswap(void *a, void *b, void *tmp, size_t width);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Sorting Algorithm Function(s).
*/

int				ft_quicksort(void *base, size_t length, size_t width,
					int (*cmp)(void *, void *));

int				ft_mergesort(void *base, size_t length, size_t width,
					int (*cmp)(void *, void *));

int				ft_selection_sort(void *base, size_t length, size_t width,
					int (*cmp)(void *, void *));

int				ft_insertion_sort(void *base, size_t length, size_t width,
					int (*cmp)(void *, void *));

int				ft_bubble_sort(void *base, size_t length, size_t width,
					int (*cmp)(void *, void *));

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Type & Base Conversion Function(s).
*/

int				valid_base(char *base_str);

int				ft_atoi(const char *str);
int				ft_atoi_base(char *str, char *base);

char			*ft_itoa(int n);
char			*ft_itoa_base(intmax_t n, char *base, int precision);
char			*ft_ltoa_base(long n, char *base, int precision);
char			*ft_lltoa_base(long long n, char *base,
					int precision);

char			*ft_utoa_base(uintmax_t n, char *base, int precision);
char			*ft_uitoa_base(unsigned int n, char *base, int precision);
char			*ft_ultoa_base(unsigned long n, char *base, int precision);
char			*ft_ulltoa_base(unsigned long long n, char *base,
					int precision);

char			*ft_ftoa(float n, int width, int precision);
char			*ft_ftoa_base(float n, char *base, int width, int precision);
char			*ft_dtoa_base(double n, char *base, int width, int precision);
char			*ft_ldtoa_base(long double n, char *base, int width,
					int precision);

char			*ft_convert_base(char *nbr, char *base_from, char *base_to);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Other Useful/Helper Function(s).
*/

void			ft_swap_int(int *a, int *b);
void			ft_swap_char(char *a, char *b);
void			ft_swap_str(char **a, char **b);
void			ft_swap_ptr(void **a, void **b);

size_t			ft_intlen(int n);
size_t			ft_intlen_base(int n, unsigned int base);
size_t			ft_intmaxlen_base(intmax_t n, unsigned int base);
size_t			ft_uintmaxlen_base(uintmax_t n, unsigned int base);
unsigned int	ft_hash(const char *str);
char			*ft_padding(int size, char c);
void			*ft_reverse_bytes(void *data, size_t size);
int				ft_find_next_prime(int n);
int				ft_wcount(const char *s, const char *charset);
int				ft_chrcount(const char *s, const char c);
void			**ft_matrix_new(void **matrix, size_t height, size_t width,
					size_t typesize);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
