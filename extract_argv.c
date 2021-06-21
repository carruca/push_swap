/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsierra- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:11:54 by tsierra-          #+#    #+#             */
/*   Updated: 2021/06/21 16:16:52 by tsierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	extract_argv(char **argv, t_list **alst)
{
	int	number;

	while (*argv)
	{
		number = ft_atoi(*argv);
		if (ft_strneg(*argv))
		{
			if (!number)
				return (error_handler());
		}
		else
		{
			if (number == -1 || !ft_strdigit(*argv))
				return (error_handler());
		}
		if (is_duplicate(number, alst) || !add_to_stack(number, alst))
			return (error_handler());
		argv++;
	}
	return (0);
}
