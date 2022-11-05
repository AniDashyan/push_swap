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

void	sort4()
{
	
}
