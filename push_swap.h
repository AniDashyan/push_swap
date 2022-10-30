#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

void	fake_atoi(char *str);
void	skip_zero(char	*str);
void	check_duplicates(char **str, int len);
int		zero_count(char *str);
t_stack	*fill_stack(char **str);
void	swap(t_stack *top);
void	push(t_stack *src, t_stack **dest);
#endif
