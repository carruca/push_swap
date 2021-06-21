/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:12:26 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 16:16:23 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	nbr_cmp(int *n1, int *n2)
{
	return (*n1 != *n2);
}

int	is_duplicate(int nbr, t_list **alst)
{
	t_list	*lst;

	lst = ft_lstfind(*alst, &nbr, nbr_cmp);
	if (!lst)
		return (0);
	return (1);
}
