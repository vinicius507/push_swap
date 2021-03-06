/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 19:14:03 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/14 20:13:39 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <operations/operations.h>

t_node	*new_node(int value, t_node *previous)
{
	t_node	*node;

	node = ft_calloc(1, sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->index = -1;
	node->value = value;
	if (previous != NULL)
	{
		node->previous = previous;
		node->_prev_sort = previous;
		previous->_next_sort = node;
		previous->next = node;
	}
	return (node);
}
