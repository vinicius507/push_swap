/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   len.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:52:17 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:26:18 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

size_t	len(t_stack *stack)
{
	size_t	size;
	t_node	*current;

	size = 0;
	current = stack->top;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return (size);
}
