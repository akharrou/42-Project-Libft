/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:52:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/21 17:19:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int		main(int ac, char *av[])
{
	int ret1 = 0;
	int ret2 = 0;
	char *value;
	size_t i = 0;

	t_vector students;

	students = vector.construct(10, &free);

	i = 0;
	while (i < students.capacity)
	{
		if (students.isempty(&students))
			ft_printf("%s", "Is empty.\n");

		ft_asprintf(&value, "%s -- %i", "Jason", i);
		students.append(&students, value);

		ft_printf("%s\n", students.vector[i]);
		i++;

		if (students.isfull(&students))
			ft_printf("%s", "Is full.\n");
	}

	(void)ac;
	(void)av;
	(void)ret1;
	(void)ret2;
	(void)value;
	return (0);
}
