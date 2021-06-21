#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

int		add_to_stack(int content, t_list **alst);
int		error_handler(void);
int		is_duplicate(int nbr, t_list **alst);
int		extract_argv(char **argv, t_list **alst);
void	print_number(void *content);
int		swap(t_list **alst);
int		swap_a(t_list **alst);
int		swap_b(t_list **alst);
int		swap_both(t_list **alst1, t_list **alst2);
int		push(t_list **alst1, t_list **alst2);

#endif
