/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:58:20 by aclarenn          #+#    #+#             */
/*   Updated: 2023/08/03 09:58:21 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_is_sorted(t_stack *a)
{
	t_stack	*temp;

	if (a)
	{
		temp = a;
		while (temp->next)
		{
			if (temp->index > temp->next->index)
				return (0);
			temp = temp->next;
		}
	}
	return (1);
}
