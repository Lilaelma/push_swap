#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# include <stdio.h> //////////////////////////////

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
void    put_in_a(t_stack *a, char **argv);

#endif