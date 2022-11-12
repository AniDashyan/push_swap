#include "push_swap.h"

void	error_check(char **str)
{	
	int	j;

	j = 0;
	while (str[j])
	{
		fake_atoi(str[j]);
		j++;
	}
	check_duplicates(str, j);
	zeros_validation(str, j);
}

void	small_sort(int argc, t_stack **a, t_stack **b)
{
	if (argc == 4)
		sort3(a);
	else if (argc == 5)
		sort4(a, b);
	else if (argc == 6)
		sort5(a, b);
}

int	main(int argc, char **argv)
{	
	int		j;
	int		*k;
	char	**str;
	t_stack	*a;
	t_stack	*b;

	j = 0;
	k = NULL;
	if (argc >= 2)
	{
		a = NULL;
		b = NULL;
		str = argv_parsing(argc, argv);
		error_check(str);
		a = fill_stack(str);
		free(str);
		indexing(a);
		while (a)
		{
			ft_printf("a->data: %d\n", a->data);
			ft_printf("a->pos: %d\n", a->pos);
			a = a->next;
		}
		if (is_sorted(a))
			print_error(SORTED);
	}
	return (0);
}
