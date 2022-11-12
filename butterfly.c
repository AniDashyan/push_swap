// #include "push_swap.h"

// int	*counter_pos(t_stack *a)
// {
// 	int	i;
// 	int	*counter;

// 	i = 0;
// 	counter = (int *)malloc(sizeof(int) * ft_lstsize(a));
// 	while (i < ft_lstsize(a))
// 	{	
// 		counter[i] = i;
// 		i++;
// 	}
// 	return (counter);
// }

// void	butterfly(t_stack *a, t_stack *b)
// {	
// 	int	*counter;
// 	int	i;

// 	(void)b;
// 	i = 0;
// 	counter = counter_pos(a);
// 	while (counter[i])
// 	{	
// 		ft_printf("counter[%d]=%d\n", i, counter[i]);
// 		i++;
// 	}
// 	while (a)
// 	{
// 		if (a->pos <= counter[i])
// 		{
// 			pb(&a, &b);
// 			rb(&b);
// 			i++;
// 		}
// 		else if (a->pos <= counter[i] + 1)
// 		{
// 			pb(&a, &b);
// 			i++;
// 		}
// 		else
// 			ra(&a);
// 		a = a->next;
// 	}
// }
