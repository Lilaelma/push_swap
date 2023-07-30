/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contrainte.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 20:45:09 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/29 20:45:10 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*src;
	t_stack	*dst;

	src = *b;
	dst = *a;
	*b = src->next;
	src->next = dst;
	*a = src;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*src;
	t_stack	*dst;

	src = *a;
	dst = *b;
	*a = src->next;
	src->next = dst;
	*b = src;
	write(1, "pb\n", 3);
}

void	sa(t_stack **a)
{
	t_stack	*temp_a;
	t_stack	*tmp;

	temp_a = *a;
	tmp = temp_a->next;
	temp_a->next = temp_a->next->next;
	tmp->next = temp_a;
	*a = tmp;
	write(1, "sa\n", 3);
}

void	ra(t_stack **a)
{
	t_stack	*temp_a;
	t_stack	*tmp;

	temp_a = *a;
	*a = temp_a->next;
	tmp = ft_last_lst(temp_a);
	tmp->next = temp_a;
	temp_a->next = NULL;
	write(1, "ra\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*temp_a;
	t_stack	*tmp;

	temp_a = *a;
	while (temp_a->next->next != NULL)
		temp_a = temp_a->next;
	tmp = temp_a->next;
	tmp->next = *a;
	*a = tmp;
	temp_a->next = NULL;
	write(1, "rra\n", 4);
}
