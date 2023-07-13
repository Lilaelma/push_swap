#include "push_swap.h"

int stack_is_sorted(t_stack *a)
{
    t_stack *temp;
    
    temp = a;
    while (temp->next)
    {
        if (temp->index > temp->next->index)
            return (0);
        temp = temp->next;
    }
    return (1);
}