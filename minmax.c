#include "push_swap.h"

int	max_pos(t_stack *a)
{
	int	max;
	int	index;

	max = a->data;
	index = a->pos;
	while (a)
	{
		if (a->data > max)
		{
			max = a->data;
			index = a->pos;
		}
		a = a->next;
	}
	return (index);
}

int	min_pos(t_stack *a)
{
	int	i;
	int	min;
	int	index;

	i = 0;
	index = 0;
	min = a->data;
	while (a)
	{
		if (a->data < min)
		{
			min = a->data;
			index = i;
		}
		i++;
		a = a->next;
	}
	return (index);
}
