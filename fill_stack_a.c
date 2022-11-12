#include "push_swap.h"

t_stack	*fill_stack(char **str)
{
	int		i;
	t_stack	*top;
	t_stack	*num;

	i = 0;
	top = ft_lstnew(ft_atoi(str[i]));
	while (str[++i])
	{
		num = ft_lstnew(ft_atoi(str[i]));
		ft_lstadd_back(&top, num);
	}
	return (top);
}
