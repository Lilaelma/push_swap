#include "push_swap.h"

t_stack *push_back(t_stack *a, int value)
{
    t_stack *element;
    t_stack *temp;
}

void    put_in_a(t_stack *a, char **argv)
{
    int i;

    i = 0;
    while (argv[i])
    {
        push_back(a, ft_atoi(argv[i]));
        i++;
    }
}