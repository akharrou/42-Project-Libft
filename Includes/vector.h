/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:58:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/06/05 18:18:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Header File -- Vector Class (i.e null terminated, generic, dynamic arrays)
*/

#ifndef VECTOR_H
# define VECTOR_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Header File(s).
*/

# include <string.h>
# include <stdarg.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro(s).
*/

# define VECTOR_INIT_CAPACITY    (256)
# define VECTOR_SIZE_MULTIPLIER  (4)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Object Declaration.
*/

typedef struct		s_vector
{
	void			**vector;
	size_t			length;
	size_t			capacity;
	\
	int				(*insert)(struct s_vector *self, size_t i, void *data);
	int				(*push)(struct s_vector *self, void *data);
	int				(*enque)(struct s_vector *self, void *data);
	int				(*append)(struct s_vector *self, void *data);
	int				(*appendleft)(struct s_vector *self, void *data);
	int				(*extend)(struct s_vector *self, size_t n, ...);
	int				(*extendleft)(struct s_vector *self, size_t n, ...);
	\
	ssize_t			(*find)(struct s_vector *self, int (*filter)(void *));
	ssize_t			(*search)(struct s_vector *self, void *ref,
						int (*cmp)(void *, void *));
	\
	void			*(*get)(struct s_vector *self, size_t i);
	void			*(*getby_ref)(struct s_vector *self, void *ref,
						int (*cmp)(void *a, void *b));
	\
	void			*(*pop)(struct s_vector *self);
	void			*(*popleft)(struct s_vector *self);
	void			*(*deque)(struct s_vector *self);
	int				(*remove)(struct s_vector *self, size_t i);
	int				(*clear)(struct s_vector *self);
	void			(*free)(void *);
	\
	void			(*iter)(struct s_vector *self, void (*function)(void *));
	void			(*viter)(struct s_vector *self,
						void (*function)(void *, va_list ap), ...);
	\
	struct s_vector	(*map)(struct s_vector *self,
						void *(*function)(void *, va_list ap), ...);
	void			(*remap)(struct s_vector *self,
						void *(*function)(void *, va_list ap), ...);
	\
	size_t			(*count)(struct s_vector *self, int (*filter)(void *));
	int				(*isfull)(struct s_vector *self);
	int				(*isempty)(struct s_vector *self);
	int				(*isvoid)(struct s_vector *self);
}					t_vector;

typedef t_vector	t_array;
typedef t_vector	t_stack;
typedef t_vector	t_queue;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Class Declaration.
*/

extern const struct	s_vector_class
{
	struct s_vector	(*constructor)(size_t capacity, void (*custom_free)(void*));
	struct s_vector	(*instance)(void);
	struct s_vector	(*init)(void (*custom_free)(void *));
	struct s_vector	(*empty)(void (*custom_free)(void *));
	struct s_vector	(*from)(void *iterable, size_t length, size_t width);
	struct s_vector	(*filter)(void *iterable, size_t length, size_t width,
						int (*filter)(void *));
	struct s_vector	(*map)(void *iterable, size_t length, size_t width,
						void *(*function)(void *));
	void			(*destructor)(struct s_vector *instance);
	\
	struct s_vector	(*copy)(struct s_vector instance);
	struct s_vector	(*resize)(struct s_vector instance, size_t new_size);
	struct s_vector	(*rightshift)(struct s_vector instance, size_t n);
	struct s_vector	(*leftshift)(struct s_vector instance, size_t n);
	struct s_vector	(*reverse)(struct s_vector instance);
} vector;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Class Method(s).
*/

struct s_vector		vector_constructor(size_t capacity,
						void (*custom_free)(void *));
void				vector_destructor(struct s_vector *instance);

struct s_vector		vector_instance(void);
struct s_vector		vector_empty(void (*custom_free)(void *));
struct s_vector		vector_init(void (*custom_free)(void *));
struct s_vector		vector_from(void *iterable, size_t length, size_t width);
struct s_vector		vector_filter(void *iterable, size_t length, size_t width,
						int (*filter)(void *));
struct s_vector		vector_map(void *iterable, size_t length, size_t width,
						void *(*function)(void *));

struct s_vector		vector_copy(struct s_vector vector);
struct s_vector		vector_reverse(struct s_vector vector);
struct s_vector		vector_resize(struct s_vector vector, size_t new_size);
struct s_vector		vector_rightshift(struct s_vector vector, size_t n);
struct s_vector		vector_leftshift(struct s_vector vector, size_t n);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Object Method(s).
*/

int					vector_push(struct s_vector *self, void *data);
int					vector_enque(struct s_vector *self, void *data);
int					vector_append(struct s_vector *self, void *data);
int					vector_appendleft(struct s_vector *self, void *data);
int					vector_insert(struct s_vector *self, size_t i, void *data);
int					vector_extend(struct s_vector *self, size_t n, ...);
int					vector_extendleft(struct s_vector *self, size_t n, ...);

ssize_t				vector_find(struct s_vector *self,
						int (*function)(void *));
ssize_t				vector_search(struct s_vector *self, void *ref,
						int (*cmp)(void *ref, void *data));

void				*vector_get(struct s_vector *self, size_t i);
void				*vector_getby_ref(struct s_vector *self, void *ref,
						int (*cmp)(void *ref, void *data));

void				*vector_pop(struct s_vector *self);
void				*vector_popleft(struct s_vector *self);
void				*vector_deque(struct s_vector *self);
int					vector_clear(struct s_vector *self);
int					vector_remove(struct s_vector *self, size_t i);
void				vector_free(void *data);

void				vector_iter(struct s_vector *self,
						void (*function)(void *));
void				vector_viter(struct s_vector *self,
						void (*function)(void *, va_list ap), ...);

void				vector_remap(struct s_vector *self,
						void *(*function)(void *, va_list ap), ...);
t_vector			vector_selfmap(struct s_vector *self,
						void *(*function)(void *, va_list ap), ...);

size_t				vector_count(struct s_vector *self, int (*filter)(void *));
int					vector_isfull(struct s_vector *self);
int					vector_isempty(struct s_vector *self);
int					vector_isvoid(struct s_vector *self);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
