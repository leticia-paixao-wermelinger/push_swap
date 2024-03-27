/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ops.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:36:36 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/03/25 19:55:39 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
