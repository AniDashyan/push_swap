#include "push_swap.h"

// void	sort_small(t_stack *a, t_stack *b)
// {
	
// }

void	sort3(t_stack *a)
{	
	if (a == NULL || a->next == NULL)
		return ;
	while (a)
	{	
		if (a->data > a->next->data)
			sa(a);
		a = a->next;
	}
}