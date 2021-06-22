/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:17:38 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/22 19:30:44 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_number(void *content)
{
	int	*nbr;

	nbr = content;
	ft_putnbr_fd(*nbr, 1);
	ft_putstr_fd("\n", 1);
}

int	print_stacks(t_list *a, t_list *b)
{
	ft_putstr_fd("-\n", 1);
	ft_lstiter(a, print_number);
	ft_putstr_fd("-\na\n\n", 1);
	ft_putstr_fd("-\n", 1);
	ft_lstiter(b, print_number);
	ft_putstr_fd("-\nb\n\n", 1);
	return (0);
}
