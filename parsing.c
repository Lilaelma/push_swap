#include "push_swap.h"

long long int	*transform_tab_long(char **argv)
{
	long long int	*tab;
	int				i;

	tab = (long long int *)malloc(sizeof(long long int) * ft_len_tab(argv) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (argv[i])
	{
		// if (ft_strlen(argv[i]) > 11)
		// 	return (free(tab), NULL);
		tab[i] = ft_atol(argv[i]);
		if (tab[i] < -2147483648 || tab[i] > 2147483647)
			return (free(tab), NULL);
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

/*---------------------------------------------*/

void	print_tab(char **tab)
{
	int i;

	i = 0;
	printf("debut print tab\n");
	while (tab[i])
	{
		printf("tab[%d] : [%s]\n", i, tab[i]);
		i++;
	}
	printf("\n");
}

void	print_array(long long int *tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("[%lld]", tab[i]);
		i++;
	}
	printf("\n");
}

/*---------------------------------------------*/

int	parsing(char **argv)
{
	int				i;
	char			**tab;
	long long int	*tab_long;

	tab = transform_tab(argv);
	tab_long = transform_tab_long(argv);
	// print_tab(tab);
	// print_array(tab_long);
	if (!tab[0] || !tab_long)
		return (free(tab_long), exit_error(tab), 0);
	i = 0;
	while (tab[i])
	{
		if ((tab_long[i] < -2147483648 || tab_long[i] > 2147483647) && ft_strlen(tab[i]) > 11)
		{
			free(tab_long);
			exit_error(tab);
		}
		// if (ft_strlen(tab[i]) > 11)
		// 	exit_error(tab);
		if (is_digit(tab[i]))
			return (free(tab_long), exit_error(tab), 0);
		i++;
	}
	is_doublon(tab);
	free(tab_long);
	free_tab(tab);
	return (1);
}