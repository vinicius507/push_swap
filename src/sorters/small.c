/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 03:20:54 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 04:05:00 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sorters/sorters.h>
#include <helpers/helpers.h>
#include <operations/operations.h>
#include <instructions/instructions.h>

static void	sort_three(t_push_swap *push_swap)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = push_swap->a->top;
	n2 = n1->next;
	n3 = n2->next;
	if (n2->index < n1->index && n1->index < n3->index)
		sa(push_swap, 1);
	else if (n2->index < n3->index && n3->index < n1->index)
		ra(push_swap, 1);
	else if (n3->index < n1->index && n1->index < n2->index)
		rra(push_swap, 1);
	else if (n3->index < n2->index && n2->index < n1->index)
	{
		sa(push_swap, 1);
		rra(push_swap, 1);
	}
	else if (n1->index < n3->index && n3->index < n2->index)
	{
		sa(push_swap, 1);
		ra(push_swap, 1);
	}
}

static void	pb_n_smallest(t_push_swap *push_swap, int n)
{
	t_node	*node;

	node = push_swap->a->_top_sort;
	while (n--)
	{
		smart_rotate_a(push_swap, node);
		pb(push_swap, 1);
		node = node->_next_sort;
	}
}

void	small(t_push_swap *push_swap)
{
	if (push_swap->len == 2)
		sa(push_swap, 1);
	else if (push_swap->len == 3)
		sort_three(push_swap);
	else if (push_swap->len <= 5)
	{
		pb_n_smallest(push_swap, push_swap->len - 3);
		sort_three(push_swap);
		if (len(push_swap->b) == 2)
		{
			if (push_swap->b->top->index < push_swap->b->bottom->index)
				sb(push_swap, 1);
			pa(push_swap, 1);
		}
		pa(push_swap, 1);
	}
}
