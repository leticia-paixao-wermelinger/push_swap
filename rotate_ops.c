/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:36:36 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/03/25 19:26:10 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
