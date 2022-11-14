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

void	small_sort(int size, t_stack **a, t_stack **b)
{
	if (size == 4)
		sort3(a);
	else if (size == 5)
		sort4(a, b);
	else if (size == 6)
		sort5(a, b);
}

void	sort(t_stack **a, t_stack **b)
{	
	int	size;

	size = ft_lstsize(*a);
	if (size <= 5)
		small_sort(size, a, b);
	else
	{
		ft_printf("big\n");
		butterfly(a, b);
		b_to_a(a, b);
	}
}

int	main(int argc, char **argv)
{	
	char	*join;
	char	**str;
	t_stack	*a;
	t_stack	*b;

	if (argc >= 2)
	{
		join = "";
		a = NULL;
		b = NULL;
		join = "";
		str = argv_parsing(argc, argv);
		error_check(str);
		a = fill_stack(str);
		indexing(a);
		free(str);
		if (is_sorted(a))
			exit (1);
		else
		{
			sort(&a, &b);
			ft_printf("after sort\n");
			print_stack(a);
		}
	}
	return (0);
}
