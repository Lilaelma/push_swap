/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarenn <aclarenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:08:36 by aclarenn          #+#    #+#             */
/*   Updated: 2023/07/23 17:47:01 by aclarenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}				t_stack;

int		parsing(char **argv);
void	print_error(char **tab);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		*trans_to_int(char **argv, int len_tab);
t_stack	*ft_last_lst(t_stack *stack);
t_stack	*push_front(t_stack *stack, int value);
t_stack	*push_back(t_stack *stack, int value);
t_stack	*put_in_a(t_stack *a, char **argv);
void	put_index_in_a(t_stack *a, char **argv, int len_tab);
void	clear_list(t_stack *stack);
int		stack_is_sorted(t_stack *a);
void	quick_sort(int *arr, int low, int high);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	ra(t_stack **a);
void	rra(t_stack **a);
void	push_elem(t_stack **a, t_stack **b, t_stack *elem, int len);
t_stack	*ft_lst_min(t_stack *stack);
void	manage_sort(t_stack **a, t_stack **b, int argc);
void	three_sort(t_stack **stack);
void	four_sort(t_stack **a, t_stack **b, int argc);
void	five_sort(t_stack **a, t_stack **b, int argc);
void	radix_sort(t_stack **a, t_stack **b, int len);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
int		ft_len_tab(char **tab);
void	*free_tab(char **tab);

#endif