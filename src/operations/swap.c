/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:44:36 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:51:00 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

void	swap(t_stack *stack)
{
	t_node	*node1;
	t_node	*node2;

	if (len(stack) < 2)
		return ;
	node1 = pop(stack);
	node2 = pop(stack);
	push(node1, stack);
	push(node2, stack);
}
