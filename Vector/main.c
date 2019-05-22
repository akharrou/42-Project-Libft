/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:52:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 16:09:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int		main(int ac, char *av[])
{
	t_vector 	students;
	void		*value;
	size_t		i;

	++av;

	students = vector.constructor(20, &free);

	if (students.isempty(&students))
		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");

	// ft_printf("Extend: [%i]\n", students.extend(&students, 8, "James", "John", "Kevin", "Dilan", "Brian", "Steve", "Mathilda", "Nope"));
	// i = -1;
	// while ((size_t)(++i) < students.capacity)
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);

	// ft_printf("ExtendLeft: [%i]\n", students.extendleft(&students, 8, "Patrick", "Silva", "Bruno", "Peter", "Samantha", "Mario", "Chris", "Yogi"));
	// i = -1;
	// while ((size_t)(++i) < students.capacity)
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);

	i = 0;
	while (i < students.capacity)
	{
		ft_asprintf((char **)&value, "%s%i", "Jason", i);

		/* All the ways to insert 1 data element at a time */
		// students.insert(&students, i, value);
		// students.insert(&students, (students.capacity - 1) - i, value);
		// students.append(&students, value);
		// students.push(&students, value);
		students.enque(&students, value);

		ft_printf("%3i:   %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;

		if (students.isfull(&students))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[FULL]-- -- -- -- -- -- -- -- --\n");
	}

	i = -1;
	while ((size_t)(++i) < students.capacity)
	{
		ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		// students.remove(&students, i);
		ft_printf("%3i: %s\n", i, students.deque(&students));
		ft_printf("%3i: %s\n", i, students.pop(&students));
		ft_printf("%3i: %s\n", i, students.popleft(&students));
		ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);

		if (students.isempty(&students))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	}

	// i = -1;
	// while ((size_t)(++i) < students.capacity)
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);

	// sleep(1);

	(void)ac;
	(void)av;
	(void)value;
	return (0);
}
