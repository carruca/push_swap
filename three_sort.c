#include "push_swap.h"

int	greater(int nbr1, int nbr2)
{
	return (nb1 > nbr2);
}

void	find_max_number();

int	find_minimum_number(t_list **alst)
{
	t_list	*minimum;
	t_list	*current;

	minimum = *alst;
	current = *alst;
	while (current)
	{
		while (current->next)
		{
			if (greater(*minimum->content, *current->next->content))
				break;
			current = current->next;
		}
		minimum = current;
	}
	return (1);
}

int	three_selection_sort(t_list **a, t_list **b)
{
	int		ret;
	t_list	*current;
	t_list	*first;
	t_list	*second;


	current = *a;
	ret = cmp_int((*a)->content, (*a)->next->content);
	current = current->next;

	return (0);
}

void	find_pos(t_list *alst, int nbr_to_find)
{
	while (alst)
	{
		if ()
		alst = alst->next;
		(*pos)++;
	}
}

int	sort_small(t_list **a, t_list **b, t_list **clone_a)
{
	int	nbr;
	int	pos;
	int	to_find;

	nbr = 0;
	pos = 0;
	to_find = (*clone_a)->content;
	if ()
	return (0);
}
