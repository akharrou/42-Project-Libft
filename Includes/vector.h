/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:58:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 11:47:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Header File -- Vector Class (i.e null terminated generic dynamic arrays)
*/

#ifndef VECTOR_H
# define VECTOR_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Header File(s).
*/

# include <string.h>

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro(s).
*/

# define VECTOR_INIT_CAPACITY    (256)
# define VECTOR_SIZE_MULTIPLIER  (2)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Object Declaration.
*/

typedef struct		s_vector
{
	void			**vector;
	size_t			load;
	size_t			capacity;
	\
	int				(*insert)(struct s_vector *self, size_t i, void *data);
	int				(*push)(struct s_vector *self, void *data);
	int				(*enque)(struct s_vector *self, void *data);
	int				(*append)(struct s_vector *self, void *data);
	int				(*prepend)(struct s_vector *self, void *data);
	int				(*extend)(struct s_vector *self, size_t n, ...);
	int				(*extendleft)(struct s_vector *self, size_t n, ...);
	\
	void			*(*getby_index)(struct s_vector *self, size_t i);
	void			*(*getby_ref)(struct s_vector *self, void *ref,
						int (*cmp)(void *a, void *b));
	\
	void			*(*pop)(struct s_vector *self);
	void			*(*popleft)(struct s_vector *self);
	void			*(*deque)(struct s_vector *self);
	void			(*free)(void *);
	int				(*remove)(struct s_vector *self, size_t i);
	int				(*clear)(struct s_vector *self);
	\
	int				(*isfull)(struct s_vector *self);
	int				(*isempty)(struct s_vector *self);
}					t_vector;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Class Declaration.
*/

extern const struct	s_vector_class
{
	struct s_vector	(*constructor)(size_t capacity, void (*vector_free)(void*));
	struct s_vector	(*resize)(struct s_vector instance, size_t new_size);
	struct s_vector	(*rightshift)(struct s_vector instance, size_t n);
	struct s_vector	(*leftshift)(struct s_vector instance, size_t n);
	struct s_vector	(*reverse)(struct s_vector instance);
} vector;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Class Function Declaration(s).
*/

struct s_vector		vector_constructor(size_t capacity,
						void (*vector_free)(void *));

struct s_vector		vector_reverse(struct s_vector vector);
struct s_vector		vector_resize(struct s_vector vector, size_t new_size);
struct s_vector		vector_rightshift(struct s_vector vector, size_t n);
struct s_vector		vector_leftshift(struct s_vector vector, size_t n);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Vector Object Function Declaration(s).
*/

int					vector_push(struct s_vector *self, void *data);
int					vector_enque(struct s_vector *self, void *data);
int					vector_append(struct s_vector *self, void *data);
int					vector_prepend(struct s_vector *self, void *data);
int					vector_insert(struct s_vector *self, size_t i, void *data);
int					vector_extend(struct s_vector *self, size_t n, ...);
int					vector_extendleft(struct s_vector *self, size_t n, ...);

void				*vector_getby_index(struct s_vector *self, size_t i);
void				*vector_getby_ref(struct s_vector *self, void *ref,
						int (*cmp)(void *a, void *b));

void				*vector_pop(struct s_vector *self);
void				*vector_popleft(struct s_vector *self);
void				*vector_deque(struct s_vector *self);
int					vector_clear(struct s_vector *self);
int					vector_remove(struct s_vector *self, size_t i);

int					vector_isfull(struct s_vector *self);
int					vector_isempty(struct s_vector *self);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
