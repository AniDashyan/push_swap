#include "push_swap.h"

int	max_pos(t_stack *a)
{
	int	max;
	int	pos;

	max = a->data;
	pos = 0;
	while (a->next)
	{	
		if (a->next->data > max)
		{
			max = a->next->data;
			pos = a->next->pos;
		}
		a = a->next;
	}
	return (pos);
}

int	min_pos(t_stack *a)
{
	int	min;
	int	pos;

	min = a->data;
	pos = 0;
	while (a->next)
	{	
		if (a->next->data < min)
		{
			min = a->next->data;
			pos = a->next->pos;
		}
		a = a->next;
	}
	return (pos);
}
