#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	if (argc == 1 || parsing(argv + 1) == 0)
		exit(1);
	if (argc == 2)
		return (0);
	b = NULL;
	a = NULL;
	a = put_in_a(a, argv + 1);
	put_index_in_a(a, argv + 1, argc - 1);

	printf("Depart : \n");
	printf("A : ");
	print_list(a);
	printf("B : ");
	print_list(b);
	pb(a, b);
	pb(a, b);
	printf("A : ");
	print_list(a);
	printf("B : ");
	print_list(b);
	sa(a);
	ra(a);
	printf("A : ");
	print_list(a);
	printf("B : ");
	print_list(b);
	pb(a, b);
	pb(a, b);
	printf("A : ");
	print_list(a);
	printf("B : ");
	print_list(b);
	// print_index(a);
	// printf("%d\n", stack_is_sorted(a));
	clear_list(a);
	return (0);
}