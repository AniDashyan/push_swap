#include "push_swap.h"

char	**argv_parsing(int argc, char **argv)
{
	int		i;
	char	**str;
	char	*join;

	i = 1;
	join = "";
	while (i < argc)
	{
		join = ft_strjoin(join, argv[i]);
		join = ft_strjoin(join, " ");
		i++;
	}
	ft_printf("joined: %s\n joined_len: %d\n", join, ft_strlen(join));
	str = ft_split(join, ' ');
	i = 0;
	free(join);
	return (str);
}
