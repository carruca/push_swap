/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:29:31 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/28 16:41:56 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *alst, int (*cmp)())
{
	while (alst && alst->next)
	{
		if (cmp(alst->content, alst->next->content))
				return (0);
		alst = alst->next;
	}
	return (1);
}
