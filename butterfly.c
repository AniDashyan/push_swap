#include "push_swap.h"

int	*counter_init(t_stack *a)
{
	int	*counter;
	int	i;
	int	len;

	i = 0;
	len = ft_lstsize(a);
	counter = malloc(sizeof(int) * len);
	while (i < len)
	{
		counter[i] = i;
		i++;
	}
	return (counter);
}

void	butterfly(t_stack *a, t_stack *b)
{
	int	*counter;
	int	i;

	counter = counter_init(a);
	i = 0;
	while (a)
	{
		if (a->pos <= counter[i])
		{
			pb(&a, &b);
			rb(&b);
			i++;
		}
		else if (a->pos <= counter[i] + 1)
		{
			pb(&a, &b);
			i++;
		}
		else
			ra(&a);
		a = a->next;
	}
}
