/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:11:31 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 22:04:40 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		if (!extract_argv(++argv, &stack_a))
		{
//			swap_a(&stack_a);
//			swap_b(&stack_b);
//			swap_both(&stack_a, &stack_b);
			push(&stack_b, &stack_a);
			printf("stack a:\n");
			ft_lstiter(stack_a, print_number);
			printf("stack b:\n");
			ft_lstiter(stack_b, print_number);
		}
		ft_lstclear(&stack_a, free);
		ft_lstclear(&stack_b, free);
	}
	system("leaks push_swap");
	return (0);
}
