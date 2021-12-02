/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:06:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:08:22 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

void	rotate(t_stack *stack)
{
	t_node	*node;

	node = pop(stack);
	if (node == NULL)
		return ;
	push_bottom(node, stack);
}

void	reverse_rotate(t_stack *stack)
{
	t_node	*node;

	node = pop_bottom(stack);
	if (node == NULL)
		return ;
	push(node, stack);
}
