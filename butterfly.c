#include "push_swap.h"

int	*counter_pos(t_stack *a)
{
	int	*num;
	int	i;

	num = malloc(sizeof(int) * ft_lstsize(a));
	if (!num)
		return (NULL);
	i = 0;
	while (a)
	{	
		num[i] = a->pos;
		a = a->next;
		i++;
	}
	i = 0;
	while (num[i])
	{	
		ft_printf("%d\n", num[i]);
		i++;
	}
	return (num);
}

// void	butterfly(t_stack *a, t_stack *b)
// {	
// 	int	*counter;
// 	int	i;

// 	(void)b;
// 	counter = counter_pos(a);
// 	i = 0;
	// while (counter[i])
	// {	
	// 	ft_printf("num[%d]=%d\n", i, counter[i]);
	// 	i++;
	// }
	// if (a->data <= counter[i])
	// {
	// 	pb(&a, &b);
	// 	rb(&b);
	// 	i++;
	// }
	// else if (a->data <= counter[i] + 1)
	// {
	// 	pb(&a, &b);
	// 	i++;
	// }
	// else
	// 	ra(&a);
// }
