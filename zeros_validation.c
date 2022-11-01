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
	num = malloc(sizeof(int) * len);
	if (!num)
		return (NULL);
	while (i < len)
	{	
		if (num_len(ft_atoi(str[i])) > 16)
			return (NULL);
		num[k++] = ft_atoi(str[i]);
		i++;
	}
	return (num);
}
