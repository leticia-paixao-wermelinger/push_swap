
#include "push_swap.h"

void	rev_rotate(t_node **stack)
{
	t_node	*temp;
	t_node	*last;

	temp = *stack;
	while (temp)
	{
		if (temp->next == NULL)
		{
			last = temp;
			temp->next = *stack;
			*stack = temp;
			while (temp)
			{
				if (temp->next == last)
				{
					temp->next = NULL;
					return ;
				}
				temp = temp->next;
			}
			return ;
		}
		temp = temp->next;
	}
}

void	rra(t_node **a)
{
	rev_rotate(a);
	if (a != NULL)
		my_printf("rra\n");
}

void	rrb(t_node **b)
{
	rev_rotate(b);
	if (b != NULL)
		my_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	if (*a != NULL && *b != NULL)
	{
		rev_rotate(a);
		rev_rotate(b);
		my_printf("rrr\n");
	}
}
