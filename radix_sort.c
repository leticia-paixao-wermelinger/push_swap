/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:46:46 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/03/27 16:23:19 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_node **a, t_node **b)
{
	int		bin;

	bin = 1;
	while (check_sorted(*a) != ORDER)
	{
		move_msd(a, b, bin);
		bin = bin << 1;
	}
}

void	move_msd(t_node **a, t_node **b, int bin)
{
	int				opr;
	int				size;

	opr = 0;
	size = size_stack(*a);
	while (*a && size > 0)
	{
		if (!((*a)->i & bin))
		{
			pb(a, b);
			opr++;
		}
		else
			ra(a);
		size--;
	}
	while (opr > 0)
	{
		pa(b, a);
		opr--;
	}
}
