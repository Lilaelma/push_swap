/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:46:37 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/29 20:46:53 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**transform_tab(char **argv)
{
	char	**tab;
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	tab = ft_split(str, ' ');
	free(str);
	return (tab);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**tab;

	if (argc == 1 || parsing(argv + 1) == 0)
		ft_error();
	a = NULL;
	b = NULL;
	tab = transform_tab(argv + 1);
	a = put_in_a(a, tab);
	put_index_in_a(a, tab, ft_len_tab(tab));
	if (stack_is_sorted(a))
		return (free_tab(tab), clear_list(a), ft_error(), 0);
	manage_sort(&a, &b, ft_len_tab(tab));
	free_tab(tab);
	clear_list(a);
	clear_list(b);
	return (0);
}
