/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:46:23 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/29 20:46:28 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lst_min(t_stack *stack)
{
	t_stack	*list;

	list = stack;
	while (stack)
	{
		if (list->index > stack->index)
			list = stack;
		stack = stack->next;
	}
	return (list);
}

int	lst_place(t_stack *stack, t_stack *element)
{
	int	place;

	place = 0;
	while (stack != element)
	{
		stack = stack->next;
		place++;
	}
	return (place);
}

t_stack	*lst_mid(t_stack *stack, int len)
{
	int	mid;
	int	i;

	mid = len / 2;
	i = 0;
	while (i < mid)
	{
		stack = stack->next;
		i++;
	}
	return (stack);
}

void	push_elem(t_stack **a, t_stack **b, t_stack *elem, int len)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *a;
	temp_b = *b;
	while (temp_a != elem)
	{
		if (lst_place(temp_a, lst_mid(temp_a, len)) < lst_place(temp_a, elem))
			rra(&temp_a);
		else
			ra(&temp_a);
	}
	pb(&temp_a, &temp_b);
	*a = temp_a;
	*b = temp_b;
}

t_stack	*ft_last_lst(t_stack *stack)
{
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}
