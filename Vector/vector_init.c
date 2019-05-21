/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 19:52:23 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/20 20:03:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


typedef struct		s_vector
{
	void			**vector;
	unsigned		length;
	unsigned		capacity;


}					t_vector;

int		vector_init(t_vector *self);
void	vector_push(t_vector *self, void *data);
void	vector_push(t_vector *self, void *data);


// vector_new();

// vector_append();
// vector_prepend();
// vector_insert();
// vector_extend();
// vector_extendleft();

// vector_pop();
// vector_popleft();
// vector_remove();
// vector_clear();

// vector_resize();

# define VECTOR_INIT_CAPACTIY 256

int		vector_init(t_vector *self)
{
	(*self).length = 0;
	(*self).capacity = VECTOR_INIT_CAPACTIY;
	(*self).vector = (void **)malloc(sizeof(void *) * (VECTOR_INIT_CAPACTIY + 1));
	if (!(*self).vector)
		return (0);
	(*self).vector[VECTOR_INIT_CAPACTIY] = NULL;
	(*self).push = &vector_push;
	(*self).pop = &vector_pop;

	return ;
}

int		main(int ac, char **av)
{
	t_vector dirs;



	printf("%s", (char *)dirs.vector[0]);

	(void)ac;
	(void)av;
	return (0);
}


// void				ft_vector_resize(t_vector *v, unsigned size);
// void				ft_vector_del(t_vector *v);
