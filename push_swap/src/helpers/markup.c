/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   markup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 22:18:53 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 00:53:03 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>

static int	by_value(t_push_swap *push_swap, t_node *markup_head, char set)
{
	int		count;
	t_node	*node;
	t_node	*last;

	count = 0;
	last = markup_head;
	if (set)
		markup_head->lock = 1;
	node = loop_next(push_swap, markup_head);
	while (node != markup_head)
	{
		if (node->index > last->index)
		{
			last = node;
			if (set)
				node->lock = 1;
			count++;
		}
		else if (set)
			node->lock = 0;
		node = loop_next(push_swap, node);
	}
	return (count);
}

static int	by_index(t_push_swap *push_swap, t_node *markup_head, char set)
{
	int		count;
	t_node	*node;
	t_node	*last;

	count = 0;
	last = markup_head;
	if (set)
		markup_head->lock = 1;
	node = loop_next(push_swap, markup_head);
	while (node != markup_head)
	{
		if (node->index == last->index + 1)
		{
			last = node;
			if (set)
				node->lock = 1;
			count++;
		}
		else if (set)
			node->lock = 0;
		node = loop_next(push_swap, node);
	}
	return (count);
}

static int	mark_f(t_push_swap *push_swap, t_node *markup_head, char set)
{
	int	count;

	count = by_index(push_swap, markup_head, 0);
	if (by_value(push_swap, markup_head, 0) > count)
		return (by_value(push_swap, markup_head, set));
	return (by_index(push_swap, markup_head, set));
}

int	markup(t_push_swap *push_swap, char set)
{
	int		temp;
	int		count;
	t_node	*node;
	t_node	*markup_head;

	count = 0;
	node = push_swap->a->top;
	markup_head = node;
	while (node != NULL)
	{
		temp = mark_f(push_swap, node, 0);
		if (temp > count)
		{
			count = temp;
			markup_head = node;
		}
		node = node->next;
	}
	mark_f(push_swap, markup_head, set);
	if (set)
		push_swap->markup_head = markup_head;
	return (count);
}
