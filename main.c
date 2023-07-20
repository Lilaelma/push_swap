/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:55:04 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/16 11:42:46 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char 	*str;
	char 	**tab;
	int		i;

	if (argc == 1 || parsing(argv + 1) == 0)
		return (1);
	b = NULL;
	a = NULL;
	str = NULL;
	i = 0;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i]);
		i++;
	}
	tab = ft_split(str, ' ');
	free(str);
	a = put_in_a(a, tab);
	put_index_in_a(a, tab, ft_len_tab(tab));
	if (stack_is_sorted(a))
		return (0);
	manage_sort(&a, &b, ft_len_tab(tab));
	free_tab(tab);
	clear_list(a);
	clear_list(b);
	return (0);
}
