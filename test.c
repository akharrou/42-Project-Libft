
/*
 *
 * TEST MAIN
 *
 */

#include "Includes/libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int		main(int ac, char *av[])
{

	t_vector num_array;
	int i;

	num_array = vector.constructor(10, NULL);

	i = 10;
	num_array.vector[0] = 10;
	i = 23;
	num_array.vector[1] = &i;

	printf("%i -- %i", (int)num_array.vector[0], *((int *)num_array.vector[1]));

	(void)ac;
	(void)av;
	return (0);
}
