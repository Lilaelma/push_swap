#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h> //////////////////////////////

typedef enum
{
	false,
	true
}   Bool;

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack  *next;
}               t_stack;

int parsing(char **argv);
void    print_error(void);

int ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
int	ft_atoi(char *str);

Bool is_empty_list(t_stack *stack);
t_stack *push_back(t_stack *a, int value);
void print_list(t_stack *stack);
t_stack *put_in_a(t_stack *a, char **argv);
t_stack *pop_front_list(t_stack *stack);
void    clear_list(t_stack *stack);

#endif