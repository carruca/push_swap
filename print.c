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
	printf("%i\n", *nbr);
}

int	print_stacks(t_list *a, t_list *b)
{
	printf("stack a:\n");
	ft_lstiter(a, print_number);
	printf("stack b:\n");
	ft_lstiter(b, print_number);
	return (0);
}
