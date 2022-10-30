#include "push_swap.h"

void	swap(t_stack *top)
{
	int	tmp;
	if (top == NULL && top->next == NULL)
	{
		ft_printf("stack empty");
		return ;
	}
	tmp = top->data;
	top->data = top->next->data;
	top->next->data = tmp;
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
