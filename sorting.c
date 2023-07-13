/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:55:37 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/13 16:55:38 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    manage_sort(t_stack **a, t_stack **b, int argc)
{
    if (argc == 2)
        sa(a);
    else if (argc == 3)
        three_sort(a);
    else if (argc == 4)
        four_sort(a, b, argc);
    else if (argc == 5)
        five_sort(a, b, argc);
    else
        radix_sort(a, b, argc);
}