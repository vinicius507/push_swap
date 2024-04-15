/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:17:18 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/28 23:26:22 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>
#include <operations/operations.h>

int	distance(t_stack *stack, t_node *target)
{
	int		dist;
	int		size;
	t_node	*node;

	dist = 0;
	node = stack->top;
	while (node != NULL)
	{
		if (node == target)
			break ;
		dist++;
		node = node->next;
	}
	size = (int)len(stack);
	if (dist > size / 2)
		dist = dist - size;
	return (dist);
}
