#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;
	char	*join;
	t_stack	*a;
	t_stack	*b;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		join = "";
		a = NULL;
		b = NULL;
		while (i < argc)
		{
			join = ft_strjoin(join, argv[i]);
			join = ft_strjoin(join, " ");
			i++;
		}
		str = ft_split(join, ' ');
		while (str[j])
		{
			fake_atoi(str[j]);
			j++;
		}
		a = fill_stack(str);
		check_duplicates(str, j);
		zeros_validation(str, j);
		if (is_sorted(a))
			ft_printf("Sorted\n");
		else
		{
			sort5(a, &b);
			while (a)
			{	
				ft_printf("%d\n", a->data);
				a = a->next;
			}
			while (b)
			{
				ft_printf("%d\n", b->data);
				b = b->next;
			}
		}
	}
	else
		ft_printf("NO");
	return (0);
}
