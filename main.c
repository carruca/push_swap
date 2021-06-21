#include "push_swap.h"

int	add_to_stack(int content, t_list **alst)
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

void	print_number(void *content)
{
	int	*nbr;

	nbr = content;
	printf("number = %i\n", *nbr);
}

int	error_handler(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	ft_strneg(const char *s)
{
	if (s[0] == '-' && ft_isdigit(s[1]))
		return (1);
	return (0);
}

static int	nbr_cmp(int *n1, int *n2)
{
//	printf("n1=%i n2=%i\n", *n1, *n2);
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

int	main(int argc, char **argv)
{
	t_list	*lst_a;
	t_list	*lst_b;

	lst_a = NULL;
	if (argc > 1)
	{
		if (!extract_argv(++argv, &lst_a))
			ft_lstiter(lst_a, print_number);
		lst_b = ft_lstnew(NULL);
		ft_lstclear(&lst_a, free);
		ft_lstclear(&lst_b, NULL);
	}
	system("leaks push_swap");
	return (0);
}
