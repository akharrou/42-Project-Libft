
#include "../Includes/libft.h"

int		compare(void *a, void *b)
{
	return (*(intmax_t *)(a) - *(intmax_t *)(b));
}

int		main(void)
{

	t_uvector	ages;

	ages = uvector.constructor(1);

	// ages.extend(&ages, 1, 7);
	// ages.extend(&ages, 2, 92, 7);
	// ages.extend(&ages, 5, 3, 4, 2, 7, 1);
	// ages.extend(&ages, 20, 7, 92, 9, 4, 1, 2, 3, 5, 8, 6, 543, 2, 9, 4, 1, 0, 3, 5, 8, 6);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	ft_mergesort(ages.uvector, ages.length, sizeof(intmax_t), &compare);

	for (size_t i = 0; i < ages.length; i++) { ft_printf("%ji, ", ages.uvector[i]); }
	ft_printf("\n\n");

	return (0);
}
