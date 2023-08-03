/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:58:45 by aclarenn          #+#    #+#             */
/*   Updated: 2023/08/03 10:04:04 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	is_doublon(char **argv, long long int *tab_long)
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
				return (free(tab_long), exit_error(argv));
			j++;
		}
		i++;
	}
}

int	parsing(char **argv)
{
	int				i;
	char			**tab;
	long long int	*tab_long;

	tab = transform_tab(argv);
	tab_long = transform_tab_long(tab);
	if (!tab || !tab_long)
		return (free(tab_long), exit_error(tab), 0);
	i = 0;
	while (tab[i])
	{
		if (ft_atol(tab[i]) != tab_long[i] && ft_strlen(tab[i]) > 11)
			return (free(tab_long), exit_error(tab), 0);
		if ((tab_long[i] < -2147483648 || tab_long[i] > 2147483647) 
			&& ft_strlen(tab[i]) > 11)
			return (free(tab_long), exit_error(tab), 0);
		if (is_digit(tab[i]))
			return (free(tab_long), exit_error(tab), 0);
		i++;
	}
	is_doublon(tab, tab_long);
	free(tab_long);
	free_tab(tab);
	return (1);
}
