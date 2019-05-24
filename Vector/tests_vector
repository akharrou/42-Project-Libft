/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_vector.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:52:54 by akharrou          #+#    #+#             */
/*   Updated: 2019/05/24 12:26:16 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/libft.h"

void	my_free(void *data)
{
	data = NULL;
	return ;
}

int		main(int ac, char *av[])
{
	t_queue 	students;
	char		*value;
	size_t		i;

	++av;


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* INSTANTIATING VECTOR OBJECT */

	students = vector.constructor(20, &my_free);


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* IS EMPTY */

	if (students.isempty(&students))
		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* APPENDING / ENQU'ING / PUSHING / INSERTING */

	// i = 0;
	// while (i < students.capacity)
	// {
	// 	ft_asprintf((char **)&value, "%s%i", "Jason", i);

	// 	/* All the ways to insert 1 data element at a time */

	// 	// students.insert(&students, i, value);
	// 	// students.insert(&students, (students.capacity - 1) - i, value);
	// 	// students.push(&students, value);
	// 	// students.enque(&students, value);
	// 	// students.append(&students, value);
	// 	// students.appendleft(&students, value);

	// 	ft_printf("%3i:   %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
	// 	++i;

	// 	if (students.isfull(&students))
	// 		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[FULL]-- -- -- -- -- -- -- -- --\n\n");
	// }


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* ADD 'N' DATA ELEMENTS & RESIZING */

	i = 0;
	while (i < 15)
	{
		ft_asprintf((char **)&value, "%s%i", "Jason", i);

		students.enque(&students, value);

		ft_printf("%3i:   %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;

		if (students.isfull(&students))
			ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[FULL]-- -- -- -- -- -- -- -- --\n\n");
	}


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* PRINT VECTOR */

	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT START]-- -- -- -- -- -- -- -- --\n\n");
	i = 0;
	while (i < students.capacity)
	{
		ft_printf("%3i:  %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;
	}
	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT END]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* [ OVER ] EXTEND */

	// ft_printf("Extend: [%i]\n", students.extend(&students, 8, "James", "John", "Kevin", "Dilan", "Brian", "Steve", "Mathilda", "Nope"));


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* [ OVER ] EXTENDLEFT */

	// ft_printf("ExtendLeft: [%i]\n", students.extendleft(&students, 8, "Patrick", "Silva", "Bruno", "Peter", "Samantha", "Mario", "Chris", "Yogi"));


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* RIGHTSHIFT */

	// students = vector.rightshift(students, 8);


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* LEFTSHIFT */

	// students = vector.leftshift(students, 8);


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* PRINT VECTOR */

	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT START]-- -- -- -- -- -- -- -- --\n\n");
	i = 0;
	while (i < students.capacity)
	{
		ft_printf("%3i:  %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;
	}
	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT END]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* RIGHT SHIFTING */

	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[RIGHT SHIFT START]-- -- -- -- -- -- -- -- --\n\n");

	// ft_printf("%s", "BEFORE RIGHT SHIFT:\n\n");
	// i = 0;
	// while (i < students.length)
	// {
	// 	ft_printf("%3i: %-20s\n", i, students.vector[i]);
	// 	++i;
	// }

	// students = vector.rightshift(students, 5);

	// ft_printf("%s", "\n\nAFTER LEFT SHIFT:\n\n");
	// i = 0;
	// while (i < students.length)
	// {
	// 	ft_printf("%3i: %-20s\n", i, students.vector[i]);
	// 	++i;
	// }

	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[RIGHT SHIFT END]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* LEFT SHIFTING */

	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[LEFT SHIFT START]-- -- -- -- -- -- -- -- --\n\n");

	// ft_printf("%s", "BEFORE LEFT SHIFT:\n\n");
	// i = 0;
	// while (i < students.length)
	// {
	// 	ft_printf("%3i: %-20s\n", i, students.vector[i]);
	// 	++i;
	// }

	// students = vector.leftshift(students, 5);

	// ft_printf("%s", "\n\nAFTER LEFT SHIFT:\n\n");
	// i = 0;
	// while (i < students.length)
	// {
	// 	ft_printf("%3i: %-20s\n", i, students.vector[i]);
	// 	++i;
	// }

	// ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[LEFT SHIFT END]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* DUPLICATION */

	// t_vector students_dup = vector.duplicate(students);

	// ft_printf("\n\n|%3s:|      %-20s|      %-20s|\n\n", "IDX", "STUDENTS VECTOR", "DUPLICATE VECTOR");
	// i = 0;
	// while (i < students.length && i < students_dup.length)
	// {
	// 	ft_printf("|%3i:|      %p|      %p|\n\n", i, students.vector[i], students_dup.vector[i]);
	// 	++i;
	// }


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


	/* POPLEFT */

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


	/* POP */

	// i = 0;
	// while (students.length != 0)
	// {
	// 	ft_printf("%3i: %-20s> Length: %-7i> Capacity: %i\n", students.length - 1, students.vector[students.length - 1], students.length, students.capacity);
	// 	ft_printf("%3i: Popped ———>  %-20s\n\n", students.length - 1, students.pop(&students));

	// 	if (students.isempty(&students))
	// 		ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[EMPTY]-- -- -- -- -- -- -- -- --\n\n");
	// }

	// ft_printf("%3i: Popped ———>  %-20s\n\n", students.length - 1, students.pop(&students));


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* CLEARING */

	students.clear(&students);


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */


	/* PRINT VECTOR */

	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT START]-- -- -- -- -- -- -- -- --\n\n");
	i = 0;
	while (i < students.capacity)
	{
		ft_printf("%3i:  %-20s> Length: %-7i> Capacity: %i\n", i, students.vector[i], students.length, students.capacity);
		++i;
	}
	ft_printf("%s", "\n-- -- -- -- -- -- -- -- --[PRINT END]-- -- -- -- -- -- -- -- --\n\n");


/* ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** ** **  */

	// sleep(1);

	(void)ac;
	(void)av;
	(void)value;
	return (0);
}
