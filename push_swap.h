#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

int	fill_stack(int content, t_list **alst);
int	error_handler(void);
int	is_duplicate(int nbr, t_list **alst);
int	extract_argv(char **argv, t_list **alst);
int	swap(t_list **alst);
int	swap_a(t_list **alst);
int	swap_b(t_list **alst);
int	swap_both(t_list **alst1, t_list **alst2);
int	push(t_list **alst1, t_list **alst2);
int	push_a(t_list **a, t_list **b);
int	push_b(t_list **b, t_list **a);
int	rotate(t_list **alst);
int	rotate_a(t_list **a);
int	rotate_b(t_list **b);
int	rotate_both(t_list **a, t_list **b);
int	reverse(t_list **alst);
int	reverse_a(t_list **a);
int	reverse_b(t_list **b);
int	reverse_both(t_list **a, t_list **b);
int	print_stacks(t_list *a, t_list *b);
int	free_stacks(t_list **a, t_list **b);
int	is_sorted(t_list *alst, int (*cmp)());
int	ft_lstat(t_list *alst, void *content, int (*cmp)());

#endif
