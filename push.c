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

void	pa(t_stack *a, t_stack *b)
{
	push(b, &a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, &b);
	write(1, "pb\n", 3);
}
