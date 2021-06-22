/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:04:18 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/22 19:19:20 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push(t_list **alst1, t_list **alst2)
{
	t_list	*push_node;

	push_node = *alst2;
	if (push_node)
	{
		*alst2 = (*alst2)->next;
		ft_lstadd_front(alst1, push_node);
		return (1);
	}
	return (0);
}

int	push_a(t_list **a, t_list **b)
{
	if (push(a, b))
	{
		ft_putstr_fd("pa\n", 1);
		return (1);
	}
	return (0);
}

int	push_b(t_list **b, t_list **a)
{
	if (push(b, a))
	{
		ft_putstr_fd("pb\n", 1);
		return (1);
	}
	return (0);
}
