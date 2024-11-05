
#include "push_swap.h"

void	push(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (dest == NULL)
	{
		*dest = *src;
		(*dest)->next = NULL;
		*src = (*src)->next;
	}
	else
	{
		temp = *dest;
		*dest = *src;
		*src = (*src)->next;
		(*dest)->next = temp;
	}
}

void	pa(t_node **b, t_node **a)
{
	push(b, a);
	if (a != NULL)
		my_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	push(a, b);
	if (b != NULL)
		my_printf("pb\n");
}
