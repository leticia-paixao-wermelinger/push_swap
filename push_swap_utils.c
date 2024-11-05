
#include "push_swap.h"

int	len_numb(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
		i++;
	return (i - 1);
}

int	size_stack(t_node *stack)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = stack;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	*make_arr(char **str)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(len_numb(str) * sizeof(int));
	if (!arr)
		return (NULL);
	while (str[i + 1])
	{
		arr[i] = my_atoi(str[i + 1]);
		i++;
	}
	return (arr);
}

void	print_list(t_node *list)
{
	t_node	*temp;

	temp = list;
	my_printf("LINKED_LIST:\n");
	while (temp)
	{
		my_printf("Endereço desse nó: %p - Valor: %d - Índice: %i \
			- Endereço next: %x\n", temp, temp->val, temp->i, temp->next);
		temp = temp->next;
	}
	free(temp);
}
