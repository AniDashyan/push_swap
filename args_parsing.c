#include "push_swap.h"

char	**argv_parsing(int argc, char **argv)
{	
	int		i;
	int		j;
	char	**str;
	char	*join;

	i = 1;
	j = 0;
	join = "";
	while (i < argc)
	{
		join = ft_strjoin(join, argv[i]);
		join = ft_strjoin(join, " ");
		i++;
	}
	str = ft_split(join, ' ');
	free(join);
	return (str);
}
