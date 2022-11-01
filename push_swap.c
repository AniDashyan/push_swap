#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**str;
	char	*join;
	t_stack	*a;

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
		int *b = zeros_validation(str, j);
		int k = 0;
		while (b[k])
		{	
			ft_printf("%d\n", b[k]);
			k++;
		}
		a = fill_stack(str);
	}
	else
		ft_printf("NO");
	return (0);
}
