#include "push_swap.h"

void	sign_error(char *str, int i, int *sign)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		else if (str[i] == '-' && (str[i + 1] == '-' || str[i + 1] == '+'))
			print_error(SIGN_ERR);
		else if (str[i] == '+' && (str[i + 1] == '-' || str[i + 1] == '+'))
			print_error(SIGN_ERR);
		else if ((str[i] == '-' || str[i] == '+') && !str[i + 1])
			print_error(SIGN_ERR);
		i++;
	}
}

void	fake_atoi(char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	sign_error(str, i, &sign);
	if (ft_isdigit(str[i]))
	{
		while (str[i] && ft_isdigit(str[i]))
		{
			num = (num * 10) + (str[i] - '0');
			if (num * sign > 2147483647)
				print_error(_INT_MAX);
			else if (num * sign < -2147483648)
				print_error(_INT_MIN);
			i++;
		}
	}
	else
		print_error(SYMBOL_ERR);
}

void	check_duplicates(char **str, int len)
{
	int	i;
	int	j;
	int	*nums;

	i = 0;
	nums = malloc(sizeof(nums) * len);
	while (str[i])
	{
		nums[i] = ft_atoi(str[i]);
		i++;
	}
	i = 0;
	while (nums[i])
	{
		j = i + 1;
		while (nums[j])
		{
			if (nums[i] == nums[j])
				print_error(DUP_ERR);
			j++;
		}
		i++;
	}
	free(nums);
}

int	is_sorted(t_stack *top)
{
	if (top == NULL || top->next == NULL)
		return (1);
	return (top->data > top->next->data && is_sorted(top->next));
}
