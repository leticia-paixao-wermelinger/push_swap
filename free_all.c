
#include "push_swap.h"

void	free_all(t_node *list)
{
	t_node	*temp;
	int		i;

	i = 1;
	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
		i++;
	}
}
