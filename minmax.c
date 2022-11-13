#include "push_swap.h"

int	max_pos(t_stack *a)
{
	int	pos;

	pos = a->pos;
	while (a)
	{
		if (a->pos > pos)
			pos = a->pos;
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
