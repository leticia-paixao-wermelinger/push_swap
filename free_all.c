/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaixao- <lpaixao-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:55:49 by lpaixao-          #+#    #+#             */
/*   Updated: 2024/03/27 16:33:00 by lpaixao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
