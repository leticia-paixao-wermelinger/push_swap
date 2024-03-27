/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:37:27 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/03/27 14:37:59 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	else
	{
		rra(a);
		sa(a);
	}
}

void	sort_4and5(t_node **a, t_node **b, int size)
{
	int	n_nodes;

	n_nodes = size;
	while (n_nodes != 0)
	{
		if ((*a)->i == 1 || (*a)->i == 2)
		{
			pb(a, b);
			n_nodes--;
			continue ;
		}
		if (size_stack(*b) == 2)
			break ;
		ra(a);
		n_nodes--;
	}
	if ((*b)->i == 1)
		sb(b);
	sort_3(a, size);
	pa(b, a);
	pa(b, a);
}
