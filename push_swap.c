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
		while (a)
		{	
			ft_printf("%d\n", a->pos);
			a = a->next;
		}
	}
	else
		ft_printf("NO");
	return (0);
}
