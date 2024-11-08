
#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	while (temp)
	{
		if (temp->next == NULL)
		{
			temp->next = *stack;
			*stack = (*stack)->next;
			temp = temp->next;
			temp->next = NULL;
			return ;
		}
		temp = temp->next;
	}
}

void	ra(t_node **a)
{
	rotate(a);
	if (a != NULL)
		my_printf("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	if (b != NULL)
		my_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	if (*a != NULL && *b != NULL)
	{
		rotate(a);
		rotate(b);
		my_printf("rr\n");
	}
}
