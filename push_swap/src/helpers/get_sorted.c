/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_sorted.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 21:08:27 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/14 22:19:48 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>

static t_node	*swap_head(t_node *node, t_node *next, t_push_swap *push_swap)
{
	t_node	*temp;

	push_swap->a->_top_sort = next;
	temp = next->_next_sort;
	next->_prev_sort = NULL;
	next->_next_sort = node;
	node->_prev_sort = next;
	node->_next_sort = temp;
	return (push_swap->a->_top_sort);
}

static t_node	*swap(t_node *prev, t_node *node, t_node *next)
{
	prev->_next_sort = node->_next_sort;
	node->_prev_sort = next;
	node->_next_sort = next->_next_sort;
	next->_prev_sort = node;
	next->_next_sort = node;
	return (next);
}

static void	bubble_sort(t_push_swap *push_swap, char *swapped)
{
	t_node	*prev;
	t_node	*node;
	t_node	*next;

	*swapped = 0;
	prev = NULL;
	node = push_swap->a->_top_sort;
	next = node->_next_sort;
	while (next != NULL)
	{
		if (node->value > next->value)
		{
			*swapped = 1;
			if (node == push_swap->a->_top_sort)
				node = swap_head(node, next, push_swap);
			else
				node = swap(prev, node, next);
		}
		prev = node;
		node = node->_next_sort;
		next = node->_next_sort;
	}
	if (*swapped == 0)
		push_swap->a->_bottom_sort = node;
}

void	get_sorted(t_push_swap *push_swap)
{
	char	swapped;

	swapped = 1;
	while (swapped != 0)
		bubble_sort(push_swap, &swapped);
}
