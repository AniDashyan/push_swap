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
	if (is_sorted(*a) == 0)
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
	int	max_index;

	max_index = max_pos(*a);
	pb(a, b);
	sort3(a);
	pa(b, a);
	if (!is_sorted(*a))
	{
		if ((*a)->pos == max_index)
			ra(a);
		else if ((*a)->pos == max_index - 1)
		{
			sa(*a);
			sa((*a)->next);
		}
		else if ((*a)->pos == max_index - 2)
			sa(*a);
	}
}

void	sort5(t_stack **a, t_stack **b)
{
	int	max_i;

	max_i = max_pos(*a);
	pb(a, b);
	sort4(a, b);
	pa(b, a);
	if (!is_sorted(*a))
	{
		if ((*a)->pos == max_i)
			ra(a);
		else if ((*a)->pos == max_i - 1)
		{
			sa(*a);
			sa((*a)->next);
			sa((*a)->next->next);
		}
		else if ((*a)->pos == max_i - 2)
		{
			sa(*a);
			sa((*a)->next);
		}
		else
			sa(*a);
	}
}
