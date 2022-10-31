#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;
	char	*join;
	t_stack	*a;
	t_stack *b;

	i = 1;
	j = 0;
	if (argc >= 2)
	{
		join = "";
		a = NULL;
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
		check_duplicates(str, j);
		a = fill_stack(str);
		b = ft_lstnew(10);
		pa(a, b);
		while (a)
		{
			ft_printf("%d\n", a->data);
			a = a->next;
		}
	}
	else
		ft_printf("NO");
	return (0);
}
