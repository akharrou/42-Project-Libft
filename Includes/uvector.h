/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uvector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:58:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/23 18:22:24 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Header File -- Unboxed Vector Class
*/

#ifndef uVECTOR_H
# define uVECTOR_H

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
# define UVECTOR_SIZE_MULTIPLIER  (2)

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Unboxed Vector Object Declaration.
*/

typedef struct		s_uvector
{
	t_data			*uvector;
	size_t			length;
	size_t			capacity;
	\
	int				(*insert)(struct s_uvector *self, size_t i, t_data data);
	int				(*push)(struct s_uvector *self, t_data data);
	int				(*enque)(struct s_uvector *self, t_data data);
	int				(*append)(struct s_uvector *self, t_data data);
	int				(*prepend)(struct s_uvector *self, t_data data);
	int				(*extend)(struct s_uvector *self, size_t n, ...);
	int				(*extendleft)(struct s_uvector *self, size_t n, ...);
	\
	void			*(*getby_index)(struct s_uvector *self, size_t i);
	void			*(*getby_ref)(struct s_uvector *self, t_data ref,
						int (*cmp)(t_data a, t_data b));
	\
	void			*(*pop)(struct s_uvector *self);
	void			*(*popleft)(struct s_uvector *self);
	void			*(*deque)(struct s_uvector *self);
	int				(*remove)(struct s_uvector *self, size_t i);
	int				(*clear)(struct s_uvector *self);
	\
	int				(*isfull)(struct s_uvector *self);
	int				(*isempty)(struct s_uvector *self);
	int				(*print)(struct s_uvector *self);
}					t_uvector;

typedef t_uvector	t_array;
typedef t_uvector	t_stack;
typedef t_uvector	t_queue;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Unboxed Vector Class Declaration.
*/

extern const struct	s_uvector_class
{
	struct s_uvector	(*constructor)(size_t capacity);
	struct s_uvector	(*duplicate)(struct s_uvector instance);
	struct s_uvector	(*resize)(struct s_uvector instance, size_t new_size);
	struct s_uvector	(*rightshift)(struct s_uvector instance, size_t n);
	struct s_uvector	(*leftshift)(struct s_uvector instance, size_t n);
	struct s_uvector	(*reverse)(struct s_uvector instance);
} uvector;

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Unboxed Vector Class Function Declaration(s).
*/

struct s_uvector		uvector_constructor(size_t capacity);

struct s_uvector		uvector_duplicate(struct s_uvector uvector);
struct s_uvector		uvector_reverse(struct s_uvector uvector);
struct s_uvector		uvector_resize(struct s_uvector uvector,
							size_t new_size);
struct s_uvector		uvector_rightshift(struct s_uvector uvector, size_t n);
struct s_uvector		uvector_leftshift(struct s_uvector uvector, size_t n);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
**  Unboxed Vector Object Function Declaration(s).
*/

int					uvector_push(struct s_uvector *self, t_data data);
int					uvector_enque(struct s_uvector *self, t_data data);
int					uvector_append(struct s_uvector *self, t_data data);
int					uvector_prepend(struct s_uvector *self, t_data data);
int					uvector_insert(struct s_uvector *self, size_t i,
						t_data data);
int					uvector_extend(struct s_uvector *self, size_t n, ...);
int					uvector_extendleft(struct s_uvector *self, size_t n, ...);

void				*uvector_getby_index(struct s_uvector *self, size_t i);
void				*uvector_getby_ref(struct s_uvector *self, t_data ref,
						int (*cmp)(t_data a, t_data b));

void				*uvector_pop(struct s_uvector *self);
void				*uvector_popleft(struct s_uvector *self);
void				*uvector_deque(struct s_uvector *self);
int					uvector_clear(struct s_uvector *self);
int					uvector_remove(struct s_uvector *self, size_t i);

int					uvector_isfull(struct s_uvector *self);
int					uvector_isempty(struct s_uvector *self);

/*
** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **
*/

#endif
