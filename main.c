/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:11:31 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/24 19:29:44 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmp_nbr(int *nbr1, int *nbr2)
{
	return (*nbr1 > *nbr2);
}

t_list	*clone_sort(t_list *alst)
{
	t_list	*clone_lst;

	clone_lst = ft_lstclone(alst, free);
	if (!clone_lst)
		return (NULL);
	ft_lstsort(clone_lst, cmp_nbr);
	return (clone_lst);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*clone_a;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		if (!extract_argv(++argv, &a))
		{
			clone_a = clone_sort(a);
//			push_b(&b, &a);
//			push_b(&b, &a);
//			push_a(&a, &b);
//			push_b(&b, &a);
//			swap_a(&a);
//			swap_b(&b);
//			swap_both(&a, &b);
//			rotate_a(&a);
//			rotate_b(&b);
//			rotate_both(&a, &b);
//			reverse_a(&a);
//			reverse_b(&b);
//			reverse_both(&a, &b);
			print_stacks(a, clone_a);
		}
		ft_lstclear(&clone_a, NULL);
		free_stacks(&a, &b);
	}
//	system("leaks push_swap");
	return (0);
}
