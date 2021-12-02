/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:29:19 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 19:51:23 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

t_node	*pop(t_stack *stack)
{
	t_node	*popped;

	if (stack == NULL)
		return (NULL);
	if (len(stack) == 0)
		return (NULL);
	popped = stack->top;
	if (popped == NULL)
		return (NULL);
	if (popped->next != NULL)
		popped->next->previous = NULL;
	else
		stack->bottom = NULL;
	stack->top = popped->next;
	popped->next = NULL;
	return (popped);
}

t_node	*pop_bottom(t_stack *stack)
{
	t_node	*popped;

	if (stack == NULL)
		return (NULL);
	if (len(stack) == 0)
		return (NULL);
	popped = stack->bottom;
	if (popped == NULL)
		return (NULL);
	if (popped->previous != NULL)
		popped->previous->next = NULL;
	else
		stack->top = popped->next;
	stack->bottom = popped->previous;
	popped->previous = NULL;
	popped->next = NULL;
	return (popped);
}
