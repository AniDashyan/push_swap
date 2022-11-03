#ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

# define DUP_ERR "duplicate error"
# define SIGN_ERR "sign error"
# define SYMBOL_ERR	"symbol error"
# define _INT_MAX ">INT_MAX error"
# define _INT_MIN "<INT_MIN error"
# define LONG_ERR	">16 error"

void	fake_atoi(char *str);
void	skip_zero(char	*str);
void	check_duplicates(char **str, int len);
int		zero_count(char *str);
t_stack	*fill_stack(char **str);
void	swap(t_stack *top);
void	push(t_stack *src, t_stack **dest);
void	rotate(t_stack **top);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack *a, t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	pa(t_stack **a, t_stack *b);
void	pb(t_stack *a, t_stack **b);
void	print_error(char *message);
void	zeros_validation(char **str, int len);
int		num_len(int num);
int		is_sorted(t_stack *top);
void	sort3(t_stack *a);

#endif
