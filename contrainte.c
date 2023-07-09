#include "push_swap.h"
#include <unistd.h>

void    pa(t_stack *a, t_stack *b)
{
    t_stack *element;

    if (b == NULL)
        return ;
    push_front(a, b->value);
    element = b;
    b = b->next;
    element->next = NULL;
    free(element);
}

void    pb(t_stack *a, t_stack *b)
{
    t_stack *element;

    if (a == NULL)
        return ;
    push_front(b, a->value);
    element = a;
    a = a->next;
    element->next = NULL;
    free(element);
}

void    sa(t_stack *a)
{
    int val;
    int id;

    id = a->index;
    val = a->value;
    a->index = a->next->index;
    a->value = a->next->value;
    a->next->index = id;
    a->next->value = val;
}

void    ra(t_stack *a)
{
    (void)a;
}