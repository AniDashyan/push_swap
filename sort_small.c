#include "push_swap.h"

void	sort2(t_stack **a)
{
	if ((*a)->pos > (*a)->next->pos)
		sa(*a);
}

void	sort3(t_stack **a)
{
	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	while (is_sorted(*a) == 0)
	{
		if ((*a)->pos > (*a)->next->pos)
			sa(*a);
		else if ((*a)->pos > (*a)->next->pos
			&& (*a)->next->pos > (*a)->next->next->pos)
		{
			sa(*a);
			rra(a);
		}
		else
			rra(a);
	}
}

void	sort4(t_stack **a, t_stack **b)
{	
	int	min_i;

	min_i = min_pos(*a);
	while ((*a)->pos != min_i)
		ra(a);
	pb(a, b);
	sort3(a);
	pa(b, a);
}

void	sort5(t_stack **a, t_stack **b)
{	
	while ((*a)->pos != 0)
		ra(a);
	pb(a, b);
	sort4(a, b);
	pa(b, a);
}
