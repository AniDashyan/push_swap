#include "push_swap.h"

void	push(t_stack *src, t_stack **dest)
{
	if (src == NULL)
	{
		ft_printf("stack is empty");
		return ;
	}
	ft_lstadd_front(dest, src);
}
