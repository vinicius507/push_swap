/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:28:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:29:38 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

void	push(t_node *node, t_stack *stack)
{
	if (stack == NULL)
		return ;
	if (len(stack) == 0)
		stack->bottom = node;
	if (stack->top != NULL)
	{
		node->next = stack->top;
		stack->top->previous = node;
	}
	stack->top = node;
}

void	push_bottom(t_node *node, t_stack *stack)
{
	if (stack == NULL)
		return ;
	if (len(stack) == 0)
		stack->top = node;
	if (stack->bottom != NULL)
	{
		stack->bottom->next = node;
		node->previous = stack->bottom;
	}
	stack->bottom = node;
}
