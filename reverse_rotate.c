#include "push_swap.h"

void	reverse_rotate(t_stack **top)
{
	t_stack	*tail;
	t_stack	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;

	tail = ft_lstlast(*top);
	tmp = ft_lstseclast(*top);
	tmp->next = NULL;
	tail->next = *top;
	*top = tail;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(&a);
	rrb(&b);
	write(1, "rrr\n", 4);
}

// int	main(void)
// {
// 	t_stack	*a;
// 	t_stack	*b;
// 	t_stack	*c;

// 	a = ft_lstnew(10);
// 	b = ft_lstnew(11);
// 	a->next = b;
// 	c = ft_lstnew(12);
// 	b->next = c;
// 	reverse_rotate(&a);
// 	while (a)
// 	{
// 		ft_printf("%d\n", a->data);
// 		a = a->next;
// 	}
// 	return (0);
// }
