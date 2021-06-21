/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:04:18 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 22:06:28 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	delone_front(t_list **alst)
{
	t_list	*lst;

	lst = (*alst)->next;
	ft_lstdelone(*alst, NULL);
	*alst = lst;
}

int	push(t_list **alst1, t_list **alst2)
{
	t_list	*lst;

	lst = *alst2;
	if (lst)
	{
		ft_lstadd_front(alst1, ft_lstnew(lst->content));
		delone_front(alst2);
	//	ft_lstiter(*alst1, print_number);
	//	ft_lstiter(*alst2, print_number);
		return (1);
	}
	return (0);
}
