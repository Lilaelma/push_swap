#include "push_swap.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res *= 10;
		res += (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int	*trans_to_int(char **argv, int len_tab)
{
	int	*tab;
	int i;

	tab = malloc(sizeof(int) * len_tab);
	if (!tab)
		return (exit(1), NULL);
	i = 0;
	while (argv[i])
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	return (tab);
}