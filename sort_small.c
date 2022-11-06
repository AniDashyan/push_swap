#include "push_swap.h"

void	sort3(t_stack **a)
{	
	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	while (is_sorted(*a) == 0)
	{
		if ((*a)->data > (*a)->next->data)
			sa(*a);
		else if ((*a)->data > (*a)->next->data
			&& (*a)->next->data > (*a)->next->next->data)
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
	int	max;

	max = max_pos(*a);
	pb(a, b);
	sort3(a);
	pa(a, b);
	if (!is_sorted(*a))
	{
		if ((*a)->data == max)
			ra(a);
		else if ((*a)->data > (*a)->next->data)
		{
			sa(*a);
			sa((*a)->next);
		}
	}
}

void	sort5(t_stack **a, t_stack **b)
{	
	pb(a, b);
	sort4(a, b);
	pa(a, b);
	if (!is_sorted(*a))
	{
		if ((*a)->data == max_pos(*a))
			ra(a);
		else if ((*a)->data > (*a)->next->data
			&& (*a)->data > (*a)->next->next->data)
		{
			sa(*a);
			sa((*a)->next);
		}
		else if ((*a)->data > (*a)->next->data)
			sa(*a);
	}	
}
