/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:59:03 by aclarenn          #+#    #+#             */
/*   Updated: 2023/08/03 09:59:04 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_stack **stack)
{
	t_stack	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	t_stack	*temp_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	temp_a = *stack_a;
	size = len;
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp_a = *stack_a;
			if (((temp_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (*stack_b != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
