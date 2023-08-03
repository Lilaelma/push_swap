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

/*-------- main.c -------------*/
char		**transform_tab(char **argv);

/*------- parsing.c -----------*/
long long int	*transform_tab_long(char **argv);
int			is_digit(char *digit);
void		is_doublon(char **argv);
int			parsing(char **argv);

/*-------- contrainte.c -------*/
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		ra(t_stack **a);
void		rra(t_stack **a);

/*-------- is_sorted.c --------*/
int			stack_is_sorted(t_stack *a);

/*-------- quick_sort.c -------*/
void		swap(int *a, int *b);
int			partition(int *arr, int low, int high);
void		quick_sort(int *arr, int low, int high);

/*---------- radix.c ----------*/
int			get_max_bits(t_stack **stack);
void		radix_sort(t_stack **stack_a, t_stack **stack_b, int len);

/*-------- short_sort.c -------*/
void		three_sort(t_stack **stack);
void		four_sort(t_stack **a, t_stack **b, int argc);
void		five_sort(t_stack **a, t_stack **b, int argc);

/*--------- sorting.c ---------*/
void		manage_sort(t_stack **a, t_stack **b, int argc);

/*---------- stack.c ----------*/
t_stack		*push_front(t_stack *stack, int value);
t_stack		*push_back(t_stack *stack, int value);
t_stack		*put_in_a(t_stack *a, char **argv);
void		put_index_in_a(t_stack *a, char **argv, int len_tab);
void		clear_list(t_stack *stack);

/*-------- lst_utils.c --------*/
t_stack		*ft_lst_min(t_stack *stack);
int			lst_place(t_stack *stack, t_stack *element);
t_stack		*lst_mid(t_stack *stack, int len);
void		push_elem(t_stack **a, t_stack **b, t_stack *elem, int len);
t_stack		*ft_last_lst(t_stack *stack);

/*-------- utils.c ------------*/
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);
long long int	ft_atol(char *str);
int			*trans_to_int(char **argv, int len_tab);
char		*ft_strjoin(char *s1, char *s2);

/*-------- utils_bis.c --------*/
void		free_tab(char **tab);
int			get_nb_word(char const *s, char c);
char		*take_word(const char *s, char c);
char		**test_protect(char const *s, char c);
char		**ft_split(char *s, char c);

/*-------- utils_ter.c --------*/
int			ft_len_tab(char **tab);
int			ft_atoi(char *str);

/*-------- error.c ------------*/
void		ft_error(void);
void		exit_error(char **tab);

#endif