/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solved.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:09:15 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/03 13:31:46 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <operations/operations.h>

char	is_solved(t_push_swap *push_swap)
{
	t_node	*node;

	if (len(push_swap->b) != 0)
		return (0);
	node = push_swap->a->top;
	while (node != NULL)
	{
		if (node->next != NULL && node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}
