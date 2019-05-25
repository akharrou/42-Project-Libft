/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:41:37 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/25 11:33:52 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Header File -- Unboxed Vector Class
*/

#ifndef UVECTOR_H
# define UVECTOR_H

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Header File(s).
*/

# include <string.h>
# include "stdint_42.h"

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
** Macro(s).
*/

# define UVECTOR_INIT_CAPACITY    (256)
# define UVECTOR_SIZE_MULTIPLIER  (4)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  UVector Object Declaration.
*/

typedef struct		s_uvector
{
	intmax_t		*uvector;
	size_t			length;
	size_t			capacity;
	\
	int				(*insert)(struct s_uvector *self, size_t i, intmax_t data);
	int				(*push)(struct s_uvector *self, intmax_t data);
	int				(*enque)(struct s_uvector *self, intmax_t data);
	int				(*append)(struct s_uvector *self, intmax_t data);
	int				(*appendleft)(struct s_uvector *self, intmax_t data);
	int				(*extend)(struct s_uvector *self, size_t n, ...);
	int				(*extendleft)(struct s_uvector *self, size_t n, ...);
	\
	intmax_t		(*get)(struct s_uvector *self, size_t i);
	\
	intmax_t		(*pop)(struct s_uvector *self);
	intmax_t		(*popleft)(struct s_uvector *self);
	intmax_t		(*deque)(struct s_uvector *self);
	\
	void			(*setall)(struct s_uvector *self, intmax_t value);
	\
	int				(*isfull)(struct s_uvector *self);
	int				(*isempty)(struct s_uvector *self);
}					t_uvector;

typedef t_uvector	t_uarray;
typedef t_uvector	t_ustack;
typedef t_uvector	t_uqueue;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  UVector Class Declaration.
*/

extern const struct	s_uvector_class
{
	struct s_uvector	(*constructor)(size_t capacity);
	void				(*destructor)(struct s_uvector *instance);
	struct s_uvector	(*copy)(struct s_uvector instance);
	struct s_uvector	(*resize)(struct s_uvector instance, size_t new_size);
	struct s_uvector	(*rightshift)(struct s_uvector instance, size_t n);
	struct s_uvector	(*leftshift)(struct s_uvector instance, size_t n);
	struct s_uvector	(*reverse)(struct s_uvector instance);
} uvector;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  UVector Class Function Declaration(s).
*/

struct s_uvector	uvector_constructor(size_t capacity);
void				uvector_destructor(struct s_uvector *instance);

struct s_uvector	uvector_copy(struct s_uvector uvector);
struct s_uvector	uvector_reverse(struct s_uvector uvector);
struct s_uvector	uvector_resize(struct s_uvector uvector, size_t new_size);
struct s_uvector	uvector_rightshift(struct s_uvector uvector, size_t n);
struct s_uvector	uvector_leftshift(struct s_uvector uvector, size_t n);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  UVector Object Function Declaration(s).
*/

int					uvector_push(struct s_uvector *self, intmax_t data);
int					uvector_enque(struct s_uvector *self, intmax_t data);
int					uvector_append(struct s_uvector *self, intmax_t data);
int					uvector_appendleft(struct s_uvector *self, intmax_t data);
int					uvector_insert(struct s_uvector *self, size_t i,
						intmax_t data);
int					uvector_extend(struct s_uvector *self, size_t n, ...);
int					uvector_extendleft(struct s_uvector *self, size_t n, ...);

intmax_t			uvector_get(struct s_uvector *self, size_t i);

intmax_t			uvector_pop(struct s_uvector *self);
intmax_t			uvector_popleft(struct s_uvector *self);
intmax_t			uvector_deque(struct s_uvector *self);

void				uvector_setall(struct s_uvector *self, intmax_t value);

int					uvector_isfull(struct s_uvector *self);
int					uvector_isempty(struct s_uvector *self);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
