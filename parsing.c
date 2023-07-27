#include "push_swap.h"

long int	*transform_tab_long(char **argv)
{
	long int	*tab;
	int			i;

	tab = (long int *)malloc(sizeof(long) * ft_len_tab(argv) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (argv[i])
	{
		tab[i] = ft_atol(argv[i]);
		i++;
	}
	return (tab);
}

int	is_digit(char *digit)
{
	int	i;

	i = 0;
	if (!digit[i])
		return (1);
	while (digit[i])
	{
		if (digit[i] != '+' && digit[i] != '-'
			&& (digit[i] < '0' || digit[i] > '9'))
			return (1);
		if ((digit[i] == '+' || digit[i] == '-')
			&& (digit[i + 1] < '0' || digit[i + 1] > '9'))
			return (1);
		i++;
	}
	return (0);
}

void	is_doublon(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strcmp(argv[i], argv[j]))
				exit_error(argv);
			j++;
		}
		i++;
	}
}

int	parsing(char **argv)
{
	int			i;
	char		**tab;
	long int	*tab_long;

	tab = transform_tab(argv);
	tab_long = transform_tab_long(argv);
	i = 0;
	while (tab[i])
	{
		if (tab_long[i] < -2147483648 || tab_long[i] > 2147483647)
		{
			free(tab_long);
			exit_error(tab);
		}
		if (ft_strlen(tab[i]) > 11)
			exit_error(tab);
		if (is_digit(tab[i]))
			exit_error(tab);
		i++;
	}
	is_doublon(tab);
	free_tab(tab);
	return (1);
}