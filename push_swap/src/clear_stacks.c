/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:03:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:24:36 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	clear_stack(t_stack **stack)
{
	t_node	*next;

	if (stack == NULL)
		return ;
	while ((*stack)->top != NULL)
	{
		next = (*stack)->top->next;
		free((*stack)->top);
		(*stack)->top = next;
	}
  if (*stack == NULL) {
    return;
  }
  free(*stack);
  *stack = NULL;
}

void	clear_stacks(t_push_swap *push_swap)
{
	if (push_swap == NULL)
		return ;
	if (push_swap->a != NULL)
		clear_stack(&(push_swap->a));
	if (push_swap->b != NULL)
		clear_stack(&(push_swap->b));
}
