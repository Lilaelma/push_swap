#include "push_swap.h"

t_stack *push_front(t_stack *stack, int value)
{
    t_stack *element;

    element = malloc(sizeof(*element));
    if (!element)
        exit(1);
    element->value = value;
    element->next = stack;
    return (element);
}

t_stack *push_back(t_stack *stack, int value)
{
    t_stack *element;
    t_stack *temp;

    element = malloc(sizeof(*element));
    if (!element)
        exit(1);
    element->value = value;
    element->next = NULL;
    if(stack == NULL)
        return (element);
    temp = stack;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = element;
    return (stack);
}

/*-------------------------------------------*/
void print_list(t_stack *stack)
{
	if(stack == NULL)
	{
		printf("Rien a afficher, la Liste est vide.\n");
		return;
	}
    printf("stack  : ");
	while(stack != NULL)
	{
		printf("[%d] ", stack->value);
		stack = stack->next;
	}
	printf("\n");
}

void    print_index(t_stack *stack)
{
    if(stack == NULL)
	{
		printf("Rien a afficher, la Liste est vide.\n");
		return;
	}
    printf("index  : ");
	while(stack != NULL)
	{
		printf("[%d] ", stack->index);
		stack = stack->next;
	}
	printf("\n");
}

void    print_tab(int *tab, int len)
{
    int i;

    printf("sorted : ");
    i = 0;
    while (i < len)
    {
        printf("[%d] ", tab[i]);
        i++;
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

void    put_index_in_a(t_stack *a, char **argv, int len_tab)
{
    t_stack *temp;
    int     *tab;
    int     *sorted;
    int     i;
    int     j;
    
    tab = trans_to_int(argv, len_tab);
    sorted = trans_to_int(argv, len_tab);
    quickSort(sorted, 0, len_tab - 1);
    temp = a;
    i = 0;
    while (i < len_tab)
    {
        j = 0;
        while (sorted[j] != tab[i])
            j++;
        temp->index = j;
        temp = temp->next;
        i++;
    }
    print_tab(sorted, len_tab);
    free(tab);
    free(sorted);
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