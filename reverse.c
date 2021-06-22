/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:05:26 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 19:05:41 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse(t_list **alst)
{
	t_list	*last;
	t_list	*current;

	if (*alst && (*alst)->next)
	{
		current = *alst;
		while (current->next && current->next->next)
			current = current->next;
		last = current->next;
		ft_lstadd_front(alst, last);
		current->next = NULL;
		return (1);
	}
	return (0);
}

int	reverse_a(t_list **a)
{
	if (reverse(a))
	{
		ft_putstr_fd("rra\n", 1);
		return (1);
	}
	return (0);
}

int	reverse_b(t_list **b)
{
	if (reverse(b))
	{
		ft_putstr_fd("rrb\n", 1);
		return (1);
	}
	return (0);
}

int	reverse_both(t_list **a, t_list **b)
{
	if (*a && *b && reverse(a) && reverse(b))
	{
		ft_putstr_fd("rra\n", 1);
		return (1);
	}
	return (0);
}
