#include "push_swap.h"
#include <unistd.h>

void    pa(t_stack *a, t_stack *b)
{
    t_stack *element;

    if (is_empty_list(b))
        return ;
    element = b;
    b = b->next;
    element->next = a;
    write(1, "pa\n", 3);
}

void    pb(t_stack *a, t_stack *b)
{
    t_stack *element;

    if (is_empty_list(a))
        return ;
    element = a;
    a = a->next;
    element->next = a;
    write(1, "pb\n", 3);
}