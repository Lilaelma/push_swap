#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack a;

	if (argc == 1 || parsing(argv + 1) == 0)
		exit(1);
	put_in_a(&a, argv + 1);
	return (0);
}