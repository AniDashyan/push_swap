#include "push_swap.h"

void	fake_atoi(char *str)
{
	int			i;
	int			sign;
	long		num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		else if (str[i] == '-' && (str[i + 1] == '-' || str[i + 1] == '+'))
		{
			ft_printf("sign Error");
			exit(1);
		}
		else if (str[i] == '+' && (str[i + 1] == '-' || str[i + 1] == '+'))
		{
			ft_printf("sign Error");
			exit(1);
		}
		else if ((str[i] == '-' || str[i] == '+') && !str[i + 1])
		{
			ft_printf("sign Error");
			exit(1);
		}
		i++;
	}
	if (ft_isdigit(str[i]) || str[i - 1] == '-' || str[i - 1] == '+')
	{
		while (str[i] && ft_isdigit(str[i]))
		{
			num = (num * 10) + (str[i] - '0');
			if (num * sign > 2147483647)
			{
				ft_printf(">INT_MAX Error");
				exit(1);
			}
			else if (num * sign < -2147483648)
			{
				ft_printf("<INT_MIN Error");
				exit(1);
			}
		i++;
		}
	}
	else
	{
		ft_printf("symbol Error");
		exit(1);
	}
}

int	zero_count(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '0' && str[i + 1] == '0')
	{
		count++;
		i++;
	}
	if (count == 0)
		return (0);
	return (count + 1);
}

void	skip_zero(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0')
			i++;
		ft_printf("%s\n", str[i]);
		i++;
	}
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
			{
				ft_printf("duplicate Error");
				exit(1);
			}
			j++;
		}
		i++;
	}
	free(nums);
	nums = NULL;
}
