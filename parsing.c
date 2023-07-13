#include "push_swap.h"
#include <stdio.h>

void is_digit(char *digit)
{
    int i;

    i = 0;
    if (!digit[i])
        print_error();
    while (digit[i])
    {
        if (digit[i] != '+' && digit[i] != '-'
            && (digit[i] < '0' || digit[i] > '9'))
            print_error();
        if ((digit[i] == '+' || digit[i] == '-')
            && (digit[i + 1] < '0' || digit[i + 1] > '9'))
            print_error();
        i++;
    }
}

void    is_doublon(char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        
        j = i + 1;
        while (argv[j])
        {
            if (!ft_strcmp(argv[i], argv[j]))
                print_error();
            j++;
        }
        i++;
    }
}

int parsing(char **argv)
{
    int i;

    i = 0;
    is_doublon(argv);
    while (argv[i])
    {
        if (ft_strlen(argv[i]) > 11)
            print_error();
        is_digit(argv[i]);
        i++;
    }
    return (1);
}