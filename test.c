
#include "Includes/libft.h"

void	print_elem(void *e)
{
	ft_printf("%s\n", *(char **)e);
}

int		ft_strcmp_v(const void *a, const void *b)
{
	int res;

	res = ft_strcmp(**(char ***)a, **(char ***)b);
	return (res);
}

int				main(int ac, const char *av[])
{
	t_vector instance;

	instance = vector.from(++av, --ac, sizeof(void *));

	// ft_printf("—————————————————————————————————————————————————————————\n");
	// ft_printf("Pre-Sort:\n\n");
	// instance.iter(&instance, &print_elem);

	// /* REVIEW : [√] */ ft_bubble_sort(instance.vector, instance.length, sizeof(void *), &ft_strcmp_v);
	// /* REVIEW : [√] */ ft_insertion_sort(instance.vector, instance.length, sizeof(void *), &ft_strcmp_v);
	// /* REVIEW : [√] */ ft_selection_sort(instance.vector, instance.length, sizeof(void *), &ft_strcmp_v);
	// /* REVIEW : [√] */ ft_mergesort(instance.vector, instance.length, sizeof(void *), &ft_strcmp_v);
	ft_quicksort(instance.vector, instance.length, sizeof(void *), &ft_strcmp_v);

	// ft_printf("—————————————————————————————————————————————————————————\n");
	// ft_printf("Post-Sort:\n\n");
	instance.iter(&instance, &print_elem);

	// ft_printf("—————————————————————————————————————————————————————————\n");

	// (void)av;
	// (void)ac;

	return (0);
}

// 4 4 4 4 4 4 4 4 4 4 3 2 3 3 3 3 3 3 3 3 3 3 9 8 7 7 7 7 7 0 0 0 0 9 8 7 8 7 7 6 4 1 5 2 3 6 2 1 4 2 4 1 5 7 8 5 2 3 9 5 2 1 4 5
// 0000111122222233333333333337444444444444445555566777777778888999
