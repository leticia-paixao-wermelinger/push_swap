/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:00:37 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/04/27 19:37:12 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (check_errors(argv) == ERROR)
		return (write(2, "Error\n", 6));
	stack_a = declare_nodes(argv, stack_a);
	if (check_sorted(stack_a) == ORDER)
	{
		free_all(stack_a);
		return (ERROR);
	}
	sort_stack(&stack_a, &stack_b);
	print_list(stack_a);
	free_all(stack_a);
}
