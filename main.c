/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:11:31 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/24 17:29:21 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		if (!extract_argv(++argv, &a))
		{
			push_b(&b, &a);
			push_b(&b, &a);
//			push_a(&a, &b);
//			push_b(&b, &a);
//			swap_a(&a);
//			swap_b(&b);
//			swap_both(&a, &b);
//			rotate_a(&a);
//			rotate_b(&b);
//			rotate_both(&a, &b);
			reverse_a(&a);
			reverse_b(&b);
			reverse_both(&a, &b);
			print_stacks(a, b);
		}
		free_stacks(&a, &b);
	}
//	system("leaks push_swap");
	return (0);
}
