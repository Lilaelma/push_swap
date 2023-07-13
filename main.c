#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc == 1 || parsing(argv + 1) == 0)
		return (1);
	if (argc == 2)
		return (0);
	b = NULL;
	a = NULL;
	a = put_in_a(a, argv + 1);
	put_index_in_a(a, argv + 1, argc - 1);
	if (stack_is_sorted(a))
		return (0);
	manage_sort(&a, &b, argc - 1);

	// printf("A : ");
	// print_list(a);
	// printf("A : ");
	// print_index(a);
	// printf("B : ");
	// print_list(b);
	// printf("B : ");
	// print_index(b);

	clear_list(a);
	clear_list(b);
	return (0);
}