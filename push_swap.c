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
	char	**str;
	t_stack	*a;
	t_stack	*b;

	if (argc >= 2)
	{
		a = NULL;
		b = NULL;
		str = argv_parsing(argc, argv);
		error_check(str);
		a = fill_stack(str);
		free(str);
		if (is_sorted(a))
			print_error(SORTED);
		indexing(a);
		if (argc <= 6)
			small_sort(argc, &a, &b);
		else
			butterfly(a, b);
		while (a)
		{
			ft_printf("a->data: %d\n", a->data);
			ft_printf("a->pos: %d\n", a->pos);
			a = a->next;
		}
	}
	return (0);
}
