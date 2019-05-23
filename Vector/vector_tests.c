/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:52:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/22 19:49:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

int		main(int ac, char *av[])
{
	t_queue 	students;
	void		*value;
	size_t		i;

	++av;


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* INSTANTIATING VECTOR OBJECT */

	students = vector.constructor(20, &free);

	if (students.isempty(&students))
		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* EXTENDING */

	// ft_printf("Extend: [%i]\n", students.extend(&students, 8, "James", "John", "Kevin", "Dilan", "Brian", "Steve", "Mathilda", "Nope"));
	// i = -1;
	// while ((size_t)(++i) < students.capacity)
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);

	// ft_printf("ExtendLeft: [%i]\n", students.extendleft(&students, 8, "Patrick", "Silva", "Bruno", "Peter", "Samantha", "Mario", "Chris", "Yogi"));
	// i = -1;
	// while ((size_t)(++i) < students.capacity)
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* APPENDING / ENQU'ING / PUSHING / INSERTING */

	// i = 0;
	// while (i < students.capacity)
	// {
	// 	ft_asprintf((char **)&value, "%s%i", "Jason", i);

	// 	/* All the ways to insert 1 data element at a time */
	// 	// students.insert(&students, i, value);
	// 	// students.insert(&students, (students.capacity - 1) - i, value);
	// 	students.append(&students, value);
	// 	// students.push(&students, value);
	// 	// students.enque(&students, value);

	// 	ft_printf("%3i:   %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
	// 	++i;

	// 	if (students.isfull(&students))
	// 		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[FULL]-- -- -- -- -- -- -- -- --\n\n");
	// }


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* RESIZING (ADDING WAY MORE THAN CAPACITY) */

	i = 0;
	while (i < 100)
	{
		ft_asprintf((char **)&value, "%s%i", "Jason", i);
		students.enque(&students, value);
		ft_printf("%3i:   %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;

		if (students.isfull(&students))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[FULL]-- -- -- -- -- -- -- -- --\n\n");
	}


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* DUPLICATION */

	t_vector students_dup = vector.duplicate(students); /* TODO : check that this works */

	i = 0;
	while (students_dup.length != 0)
	{
		ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", students_dup.length - 1, students_dup.vector[students_dup.length - 1], students_dup.length, students_dup.capacity);
		ft_printf("%3i: Popped ———>  %-20s\n\n", students_dup.length - 1, students_dup.pop(&students_dup));

		if (students_dup.isempty(&students_dup))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	}

	ft_printf("%3i: Popped ———>  %-20s\n\n", students_dup.length - 1, students_dup.pop(&students_dup));


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* REVERSING */

	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[START REVERSED]-- -- -- -- -- -- -- -- --\n\n");
	// students = vector.reverse(students);

	// i = 0;
	// while (i < students.capacity + 1)
	// {
	// 	ft_printf("%3i: %s\n", i, students.vector[i]);
	// 	++i;
	// }
	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[END REVERSED]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* DEQUE'ING */

	// i = 0;
	// while (students.length != 0)
	// {
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", 0, students.vector[0], students.length, students.capacity);
	// 	ft_printf("%3i: %-20s> Dequed\n", 0, students.deque(&students));
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n\n", 0, students.vector[0], students.length, students.capacity);

	// 	if (students.isempty(&students))
	// 		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	// }


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* LEFT-POP'ING */

	// i = 0;
	// while (students.length != 0)
	// {
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", 0, students.vector[0], students.length, students.capacity);
	// 	ft_printf("%3i: %-20s> Leftpopped\n", 0, students.popleft(&students));
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n\n", 0, students.vector[0], students.length, students.capacity);

	// 	if (students.isempty(&students))
	// 		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	// }


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* POP'ING (NORMAL) */

	i = 0;
	while (students.length != 0)
	{
		ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", students.length - 1, students.vector[students.length - 1], students.length, students.capacity);
		ft_printf("%3i: Popped ———>  %-20s\n\n", students.length - 1, students.pop(&students));

		if (students.isempty(&students))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	}

	ft_printf("%3i: Popped ———>  %-20s\n\n", students.length - 1, students.pop(&students));


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */

	// sleep(1);

	(void)ac;
	(void)av;
	(void)value;
	return (0);
}
