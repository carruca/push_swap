/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:38:38 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/28 17:43:33 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstat(t_list *alst, void *content, int (*cmp)())
{
	int	pos;

	pos = 0;
	while (alst && content)
	{
		if (cmp(alst->content, content))
			return (pos);
		alst = alst->next;
		pos++;
	}
	return (-1);
}
