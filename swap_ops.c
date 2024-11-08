
#include "push_swap.h"

void	swap(t_node **list)
{
	t_node	*t;
	t_node	*t2;

	if (list == NULL)
		return ;
	t = *list;
	t2 = *list;
	t = t->next;
	(*list)->next = t->next;
	*list = t;
	t->next = t2;
}

void	sa(t_node **a)
{
	swap(a);
	if (a != NULL)
		my_printf("sa\n");
}

void	sb(t_node **b)
{
	swap(b);
	if (b != NULL)
		my_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	if (*a != NULL && *b != NULL)
	{
		swap(a);
		swap(b);
		my_printf("ss\n");
	}
}
