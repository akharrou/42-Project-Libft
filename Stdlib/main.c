
#include "../Includes/libft.h"

int		compare(void *a, void *b)
{
	return (*(intmax_t *)(a) - *(intmax_t *)(b));
}

int		main(void)
{

	t_uvector	ages;

	ages = uvector.constructor(1);
	ages.extend(&ages, 20, 7, 2, 9, 4, 1, 0, 3, 5, 8, 6, 7, 2, 9, 4, 1, 0, 3, 5, 8, 6);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	ft_insertion_sort(ages.uvector, ages.length, sizeof(intmax_t), &compare);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	return (0);
}

/*


int		main(void)
{

	t_uvector	ages;

	ages = uvector.constructor(1);
	ages.extend(&ages, 10, 700, 200, 900, 400, 100, 000, 300, 500, 800, 600);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	ft_bubble_sort(ages.uvector, ages.length, sizeof(intmax_t), &compare);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	return (0);
}


 */
