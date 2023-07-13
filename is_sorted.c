/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:54:48 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/13 16:54:49 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_is_sorted(t_stack *a)
{
    t_stack *temp;
    
    temp = a;
    while (temp->next)
    {
        if (temp->index > temp->next->index)
            return (0);
        temp = temp->next;
    }
    return (1);
}