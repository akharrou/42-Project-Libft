/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:58:03 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 12:31:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Header File -- Vector Class (i.e generic dynamic arrays)
*/

#ifndef VECTOR_H
# define VECTOR_H

# include <string.h>

# define VECTOR_INIT_CAPACITY 256

typedef struct		s_vector
{
	void			**vector;
	size_t			cur_length;
	size_t			capacity;
	\
	int				(*push)(struct s_vector *self, void *data);
	int				(*enque)(struct s_vector *self, void *data);
	int				(*append)(struct s_vector *self, void *data);
	int				(*prepend)(struct s_vector *self, void *data);
	int				(*insert)(struct s_vector *self, size_t i, void *data);
	int				(*extend)(struct s_vector *self, size_t n, ...);
	int				(*extendleft)(struct s_vector *self, size_t n, ...);
	int				*(*pop)(struct s_vector *self);
	int				*(*popleft)(struct s_vector *self);
	int				*(*deque)(struct s_vector *self);
	int				(*remove)(struct s_vector *self, size_t i);
	int				(*clear)(struct s_vector *self);
	int				(*resize)(struct s_vector *self, size_t new_size);
}					t_vector;

int					vector_push(struct s_vector *self, void *data)
int					vector_enque(struct s_vector *self, void *data)
int					vector_append(struct s_vector *self, void *data)
int					vector_prepend(struct s_vector *self, void *data)
int					vector_insert(struct s_vector *self, size_t i, void *data)
int					vector_extend(struct s_vector *self, size_t n, ...)
int					vector_extendleft(struct s_vector *self, size_t n, ...)
void				*vector_pop(struct s_vector *self)
void				*vector_popleft(struct s_vector *self)
void				*vector_deque(struct s_vector *self)
int					vector_remove(struct s_vector *self, size_t i)
int					vector_clear(struct s_vector *self)
int					vector_resize(struct s_vector *self, size_t new_size)

extern const struct	s_vector_class {
	t_vector		(*construct)(size_t capacity);
}					vector;

t_vector			vector_construct(size_t capacity);

#endif
