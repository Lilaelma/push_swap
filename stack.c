#include "push_swap.h"

Bool is_empty_list(t_stack *stack)
{
	if(stack == NULL)
		return true;
	return false;
}

t_stack *push_back(t_stack *a, int value)
{
    t_stack *element;
    t_stack *temp;

    element = malloc(sizeof(*element));
    if (!element)
        exit(1);
    element->value = value;
    element->next = NULL;
    if(is_empty_list(a))
        return (element);
    temp = a;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = element;
    return (a);
}

/*-------------------------------------------*/
void print_list(t_stack *stack)
{
	if(is_empty_list(stack))
	{
		printf("Rien a afficher, la Liste est vide.\n");
		return;
	}

	while(stack != NULL)
	{
		printf("[%d] ", stack->index);
		stack = stack->next;
	}
	printf("\n");
}
/*--------------------------------------------*/

t_stack *put_in_a(t_stack *a, char **argv)
{
    int i;

    i = 0;
    while (argv[i])
    {
        a = push_back(a, ft_atoi(argv[i]));
        i++;
    }
    return (a);
}

void    put_index_in_a(t_stack *a, char **argv)
{
    char    **copy;
    int     len;
    int     i;
    int     j;

    copy = argv;
    len = len_tab(argv);
    i = 0;
    while (i < len)
    {
        j = 0;
        while (j < len)
        {
            if ()
            j++;
        }
        i++;
    }
}

void	clear_list(t_stack *stack)
{
	t_stack *temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}