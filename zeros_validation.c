#include "push_swap.h"

int	num_len(int	num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	*zeros_validation(char **str, int len)
{	
	int	i;
	int	k;
	int	*num;

	i = 0;
	k = 0;
	num = malloc(sizeof(int) * (len + 1));
	ft_printf("%d\n", len);
	if (!num)
		return (NULL);
	while (i < len)
	{	
		num[i] = ft_atoi(str[i]);
		i++;
	}
	i = 0;
	while (num[i])
	{	
		ft_printf("bbb %d\n", num[k]);
		i++;
	}
	return (num);
}
