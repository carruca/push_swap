/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:47:29 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 19:03:49 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **alst)
{
	t_list	*first;
	t_list	*second;

	if (*alst && (*alst)->next)
	{
		first = *alst;
		second = first->next;
		first->next = first->next->next;
		*alst = second;
		(*alst)->next = first;
		return (1);
	}
	return (0);
}

int	swap_a(t_list **alst)
{
	if (swap(alst))
	{
		ft_putstr_fd("sa\n", 1);
		return (1);
	}
	return (0);
}

int	swap_b(t_list **alst)
{
	if (swap(alst))
	{
		ft_putstr_fd("sb\n", 1);
		return (1);
	}
	return (0);
}

int	swap_both(t_list **alst1, t_list **alst2)
{
	if (*alst1 && *alst2 && swap(alst1) && swap(alst2))
	{
		ft_putstr_fd("ss\n", 1);
		return (1);
	}
	return (0);
}
