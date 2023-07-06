#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *a;

	if (argc == 1 || parsing(argv + 1) == 0)
		exit(1);
	a = NULL;
	a = put_in_a(a, argv + 1);
	put_index_in_a(a, argv + 1, argc - 1);
	print_list(a);
	print_index(a);
	clear_list(a);
	return (0);
}