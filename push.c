#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{	
	t_stack	*tmp;

	if (*src == NULL)
	{
		ft_printf("stack is empty\n");
		return ;
	}
	tmp = *src;
	*src = (*src)->next;
	tmp->next = NULL;
	ft_lstadd_front(dest, tmp);
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	write(1, "pb\n", 3);
}
