
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <limits.h>

enum e_error {
	NO_ERROR = 0,
	ERROR = 1,
	DIF = 2,
	ORDER = 3
};

typedef struct s_node
{
	int				i;
	int				val;
	struct s_node	*next;
}	t_node;

int		check_errors(char **str);
int		is_num(char *str);
int		is_int(char *str);
int		duplicate(char **str);
int		len_numb(char **argv);
int		*make_arr(char **str);
int		check_sorted(t_node *list);
t_node	*declare_nodes(char **str, t_node *list);
t_node	*declare_first_node(char *c, t_node *list);
t_node	*declare_last_node(char *c, t_node *temp);
void	set_index(t_node *list);
void	print_list(t_node *list);
void	swap(t_node **list);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	push(t_node **src, t_node **dest);
void	pa(t_node **b, t_node **a);
void	pb(t_node **a, t_node **b);
void	rotate(t_node **stack);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rev_rotate(t_node **stack);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
int		size_stack(t_node *stack);
void	sort_stack(t_node **a, t_node **b);
void	sort_3(t_node **a, int size);
void	sort_4and5(t_node **a, t_node **b, int size);
void	radix_sort(t_node **a, t_node **b);
void	move_msd(t_node **a, t_node **b, int bin);
void	free_all(t_node *list);
#endif
