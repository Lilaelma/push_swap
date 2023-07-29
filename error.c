#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	exit_error(char **tab)
{
	free_tab(tab);
	write(2, "Error\n", 6);
	exit(1);
}
