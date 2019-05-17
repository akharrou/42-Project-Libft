/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_42.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 21:38:09 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/17 12:40:58 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_42_H
# define STRING_42_H

# include <string.h>

size_t		ft_strlen(const char *str);
size_t		ft_strnlen(const char *s, size_t maxlen);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t len);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strrev(char *str);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t n);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char		*ft_strcpy_until(char *dest, const char *src, char *charset);
char		*ft_strcpyfre(char *dst, const char *src, int free_dst,
			int free_src);
void		ft_astrcpy(char **dst, const char *src);
void		ft_astrcpyfre(char **dst, const char *src, int free_src);
void		ft_astrncpy(char **dst, const char *src, size_t len);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strncat(char *dst, const char *src, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strcatfre(char *s1, const char *s2, int free_s1, int free_s2);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strchrs(const char *str, const char *charset);
char		*ft_strstr(const char *str, const char *find);
char		*ft_strnstr(const char *str, const char *find, size_t len);
char		*ft_strdup(const char *str);
char		*ft_strndup(const char *src, size_t n);
char		*ft_strndupfre(const char *src, size_t n, int free_src);
char		*ft_strdup_range(const char *str, int index, int end);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s, unsigned char c);
char		*ft_strstrip(char const *s, char *charset);
char		*ft_strlstrip(char const *s, char *charset);
char		*ft_strnlstrip(char const *s, char *charset, int n);
char		*ft_strrstrip(char const *s, char *charset);
char		*ft_strnrstrip(char const *s, char *charset, int n);
char		**ft_strsplit(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoinfre(char const *s1, char const *s2, int free_s1,
			int free_s2);
char		*ft_strappend(char const *s1, char const *s2, int free_s1,
			int free_s2);
char		*ft_strprepend(char const *s1, char const *s2, int free_s1,
			int free_s2);
char		*ft_strnjoin(char const *s1, char const *s2, size_t len);
char		*ft_strnjoinfre(char const *s1, char const *s2, size_t len,
			int free_str);
char		*ft_strnappend(char const *s1, char const *s2, size_t len,
			int free_str);
char		*ft_strnprepend(char const *s1, char const *s2, size_t len,
			int free_str);

char		*ft_strhex(const char *str, size_t size);
char		*ft_strhexfre(const char *str, size_t size);

char		**ft_strtab(int size, ...);
char		**ft_strtabnew(int size);
size_t		ft_strtablen(const char **strtab);
size_t		ft_strtabnlen(const char **strtab, long n);
char		**ft_strtabdup(const char **strtab);
char		**ft_strtabndup(const char **strtab, long n);
char		**ft_strtabcat(char **dst, char **src);
char		**ft_strtabncat(char **dst, char **src, long n);
char		**ft_strtab_appendstr(const char **strtab, char *str);
char		**ft_strtab_appendstrfre(const char **strtab, char *str,
			int free_s1, int free_s2);

#endif
