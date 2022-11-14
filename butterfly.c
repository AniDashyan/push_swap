#include "push_swap.h"

void	print_stack(t_stack *s)
{
	while (s)
	{
		ft_printf("s->data = %d\n", s->data);
		ft_printf("s->pos = %d\n", s->pos);
		s = s->next;
	}
}

void	b_to_a(t_stack **a, t_stack **b)
{
	int	max;

	while (*b)
	{
		max = max_pos(*b);
		while (*b && max != (*b)->pos)
			rb(b);
		pa(b, a);
	}
}

void	butterfly(t_stack **a, t_stack **b)
{
	int	counter;

	counter = 0;
	while (*a)
	{
		if ((*a)->pos <= counter)
		{
			pb(a, b);
			rb(b);
			counter++;
		}
		else if ((*a)->pos <= counter + 1)
		{
			pb(a, b);
			counter++;
		}
		else
			ra(a);
	}
}
