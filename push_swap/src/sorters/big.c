/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 04:06:59 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/01/05 17:01:38 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorters/sorters.h>
#include <helpers/helpers.h>
#include <operations/operations.h>
#include <instructions/instructions.h>

static void	populate_b(t_push_swap *push_swap)
{
	int	locked;

	locked = markup(push_swap, 1);
	while (has_unlocked(push_swap))
	{
		if (should_relock(push_swap, locked))
		{
			sa(push_swap, 1);
			locked = markup(push_swap, 1);
		}
		else if (!push_swap->a->top->lock)
			pb(push_swap, 1);
		else
			ra(push_swap, 1);
	}
}

static t_node	*get_position(t_push_swap *push_swap, int index)
{
	t_node	*aux;
	t_node	*node;

	node = push_swap->markup_head;
	if (index < node->index)
	{
		aux = loop_prev(push_swap, node);
		while (index < aux->index && node->index > aux->index)
		{
			node = aux;
			aux = loop_prev(push_swap, node);
		}
		return (node);
	}
	aux = loop_next(push_swap, node);
	while (node->index < index && aux->index > node->index)
	{
		node = aux;
		aux = loop_next(push_swap, node);
	}
	if (index > node->index && node->index > aux->index)
		node = aux;
	return (node);
}

static t_node	*get_candidate(t_push_swap *push_swap)
{
	int		dist;
	int		temp_d;
	int		dist_pos;
	t_node	*node;
	t_node	*candidate;

	dist_pos = 0;
	dist = 0xFFFFFF;
	candidate = NULL;
	node = push_swap->b->top;
	while (node != NULL)
	{
		temp_d = distance(push_swap->b, node);
		if (ft_abs(temp_d) + ft_abs(distance(push_swap->a,
					get_position(push_swap, node->index)))
			< ft_abs(dist) + ft_abs(dist_pos))
		{
			dist = temp_d;
			candidate = node;
			dist_pos = distance(push_swap->a,
					get_position(push_swap, node->index));
		}
		node = node->next;
	}
	return (candidate);
}

void	big(t_push_swap *push_swap)
{
	t_node	*pos;
	t_node	*candidate;

	populate_b(push_swap);
	while (len(push_swap->b) != 0)
	{
		candidate = get_candidate(push_swap);
		pos = get_position(push_swap, candidate->index);
		smart_rotate_ab(push_swap, pos, candidate);
		pa(push_swap, 1);
	}
	smart_rotate_a(push_swap, push_swap->a->_top_sort);
}
