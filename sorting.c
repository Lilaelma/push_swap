#include "push_swap.h"

void    manage_sort(t_stack **a, t_stack **b, int argc)
{
    if (argc == 2)
        sa(a);
    else if (argc == 3)
        three_sort(a);
    else if (argc == 4)
        four_sort(a, b, argc);
    else if (argc == 5)
        five_sort(a, b, argc);
    else
        radix_sort(a, b, argc);
}