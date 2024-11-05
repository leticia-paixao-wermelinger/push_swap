
#include "push_swap.h"

void	sort_stack(t_node **a, t_node **b)
{
	int	size;

	size = size_stack(*a);
	*b = NULL;
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3(a, size);
	else if (size == 4 || size == 5)
		sort_4and5(a, b, size);
	else if (size > 5)
		radix_sort(a, b);
}

void	sort_3(t_node **a, int size)
{
	t_node	*stack;

	stack = NULL;
	if ((*a)->i == size)
		ra(a);
	stack = *a;
	if ((*a)->i == (size - 1))
	{
		stack = stack->next;
		if (stack->i == (size))
			rra(a);
		else
			sa(a);
	}
	else if (check_sorted(*a) != ORDER)
	{
		rra(a);
		sa(a);
	}
}

void	sort_4and5(t_node **a, t_node **b, int size)
{
	int	n_nodes;

	n_nodes = size;
	while (n_nodes != 0 && size_stack(*a) != 3)
	{
		if ((*a)->i == 1 || ((*a)->i == 2 && size == 5))
		{
			pb(a, b);
			n_nodes--;
			continue ;
		}
		if ((size_stack(*b) == 2 && size == 5) || (size_stack(*b) == 1 && size == 4))
			break ;
		ra(a);
		n_nodes--;
	}
	if ((*b)->i == 1 && size == 5)
		sb(b);
	sort_3(a, size);
	pa(b, a);
	if (b != NULL && size == 5)
		pa(b, a);
}
