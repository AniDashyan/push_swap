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

void	sort(int argc, t_stack **a, t_stack **b)
{	
	if (argc <= 6)
		small_sort(argc, a, b);
	else
	{
		butterfly(a, b);
		b_to_a(a, b);
	}
}

int	main(int argc, char **argv)
{	
	char	*join;
	char	**str;
	int		i;
	t_stack	*a;
	t_stack	*b;

	i = 1;
	if (argc >= 2)
	{
		a = NULL;
		b = NULL;
		join = "";
		// str = argv_parsing(argc, argv);
		while (i < argc)
		{
			join = ft_strjoin(join, argv[i]);
			join = ft_strjoin(join, " ");
			i++;
		}
		ft_printf("joined string is %s\n", join);
		str = ft_split(join, ' ');
		i = 0;
		while (str[i])
		{	
			ft_printf("splitted string %d: %s\n", i, str[i]);
			i++;
		}
		error_check(str);
		a = fill_stack(str);
		ft_printf("before sort\n");
		print_stack(a);
		free(str);
		indexing(a);
		if (!is_sorted(a))
		{
			sort(argc, &a, &b);
			ft_printf("after sort\n");
			print_stack(a);
		}
	}
	return (0);
}
