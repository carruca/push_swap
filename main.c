/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:11:31 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/29 19:34:00 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cmp_nbr(int *nbr1, int *nbr2)
{
	return (*nbr1 > *nbr2);
}

t_list	*sort_clone(t_list *alst)
{
	t_list	*clone_lst;

	clone_lst = ft_lstclone(alst, free);
	if (!clone_lst)
		return (NULL);
	ft_lstsort(clone_lst, cmp_nbr);
	return (clone_lst);
}

int	nbr_equal(int *nbr1, int *nbr2)
{
	return (*nbr1 == *nbr2);
}

int	get_position(t_list *alst, void	*nbr)
{
	int	pos;

	pos = 0;
	while (alst)
	{
		if (nbr_equal(nbr, alst->content))
			break ; 
		alst = alst->next;
		pos++;
	}
	return (pos);
}

int	find_nearest(t_list *alst, t_list *chunk)
{
	int	pos;
	int	tmp;

	pos = 0;
	while (chunk)
	{
		tmp = get_position(alst, chunk->content);
		if (tmp < pos)
			pos = tmp;
		chunk = chunk->next;
	}
	return (pos);
}
/*
t_list	*get_chunk(t_list *alst, int size)
{
	t_list	*chunk;

	if (size == 100)
		chunk = create_chunk(alst, 20);
	return (chunk);
}*/

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*clone_a;
//	t_list	*block;
	int		pos;

	a = NULL;
	b = NULL;
	clone_a = NULL;
	if (argc > 1)
	{
		if (!extract_argv(++argv, &a) && !is_sorted(a, cmp_nbr))
		{
			clone_a = sort_clone(a);
//			block = get_chunk(clone_a);
			pos = find_nearest(a, clone_a);
			printf("pos = %i\n", pos);
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
		}
		print_stacks(a, clone_a);
		ft_lstclear(&clone_a, NULL);
		free_stacks(&a, &b);
	}
//	system("leaks push_swap");
	return (0);
}
