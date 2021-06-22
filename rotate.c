/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:04:47 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 19:05:01 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **alst)
{
	t_list	*first;
	t_list	*current;

	if (*alst)
	{
		first = *alst;
		current = *alst;
		*alst = (*alst)->next;
		while (current->next)
			current = current->next;
		current->next = first;
		first->next = NULL;
		return (1);
	}
	return (0);
}

int	rotate_a(t_list **a)
{
	if (rotate(a))
	{
		ft_putstr_fd("ra\n", 1);
		return (1);
	}
	return (0);
}

int	rotate_b(t_list **b)
{
	if (rotate(b))
	{
		ft_putstr_fd("rb\n", 1);
		return (1);
	}
	return (0);
}

int	rotate_both(t_list **a, t_list **b)
{
	if (*a && *b && rotate(a) && rotate(b))
	{
		ft_putstr_fd("rr\n", 1);
	}
	return (0);
}
