/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:14:05 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/22 19:01:17 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fill_stack(int content, t_list **alst)
{
	int		*nbr;
	t_list	*lst;

	nbr = malloc(sizeof(int));
	if (!nbr)
		return (0);
	*nbr = content;
	lst = ft_lstnew(nbr);
	if (!lst)
	{
		free(nbr);
		return (0);
	}
	ft_lstadd_back(alst, lst);
	return (1);
}
