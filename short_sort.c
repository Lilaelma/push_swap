/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:49:55 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/29 20:49:56 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack **stack)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->index;
	b = (*stack)->next->index;
	c = (*stack)->next->next->index;
	if (a > b && b < c && c > a)
		sa(stack);
	if (a > b && b > c && c < a)
	{
		sa(stack);
		rra(stack);
	}
	if (a > b && b < c && c < a)
		ra(stack);
	if (a < b && b > c && c > a)
	{
		sa(stack);
		ra(stack);
	}
	if (a < b && b > c && c < a)
		rra(stack);
}

void	four_sort(t_stack **a, t_stack **b, int argc)
{
	t_stack	*elem;

	elem = *a;
	push_elem(a, b, ft_lst_min(elem), argc);
	three_sort(a);
	pa(a, b);
}

void	five_sort(t_stack **a, t_stack **b, int argc)
{
	t_stack	*elem;

	elem = *a;
	push_elem(a, b, ft_lst_min(elem), argc);
	four_sort(a, b, argc);
	pa(a, b);
}
