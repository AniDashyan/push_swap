#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *s)
{
	while (s)
	{
		printf("s->data = %10d\t\t", s->data);
		printf("s->pos = %d\n", s->pos);
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

int	generate_n(t_stack *a)
{	
	int	size;
	int	n;

	size = ft_lstsize(a);
	n = 0;
	if (size > 100)
		n = 15;
	else if (size == 500)
		n = 30; 
	return (n);
}

void	butterfly(t_stack **a, t_stack **b)
{
	int	counter;
	int	n;

	counter = 0;
	n = generate_n(*a);
	while (*a)
	{
		if ((*a)->pos <= counter)
		{
			pb(a, b);
			rb(b);
			counter++;
		}
		else if ((*a)->pos <= counter + n)
		{
			pb(a, b);
			counter++;
		}
		else
			ra(a);
	}
}
