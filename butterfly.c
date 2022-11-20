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

void	max_to_top(t_stack **b, int max, int size)
{
	if (max < size / 2)
		while (max != (*b)->pos)
			rb(b);
	else
		while (max != (*b)->pos)
			rrb(b);
}

void	b_to_a(t_stack **a, t_stack **b)
{
	int	max;
	int	size;


	while (*b)
	{
		size = ft_lstsize(*b);
		max = max_pos(*b);
		max_to_top(b, max, size);
		pa(b, a);
	}
}

int	generate_n(int size)
{
	int	chunk;

	chunk = 1;
    if (size < 50)
        chunk = 3 + (size - 6) / 7;
    else if (size >= 50 && size < 100)
        chunk = 10 + (size - 50) / 8;
    else if (size >= 100 && size < 350)
        chunk = 5 + (size - 100) / 9;
    else if (size >= 350 && size <= 500)
        chunk = 27 + (size - 350) / 15;
    else if (size > 500)
        chunk = 37 + (size - 500) / 20;
    return (chunk);
}

void	butterfly(t_stack **a, t_stack **b, int size)
{
	int	counter;
	int	n;

	size = ft_lstsize(*a);
	counter = 0;
	n = generate_n(size);
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
