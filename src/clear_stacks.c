/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:03:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/10/19 18:25:03 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_nodes(t_node **head)
{
	t_node	*next;

	if (head == NULL || *head == NULL)
		return ;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

void	clear_stacks(t_stack *stack)
{
	if (stack->a != NULL)
		clear_nodes(&(stack->a));
	if (stack->b != NULL)
		clear_nodes(&(stack->b));
}
