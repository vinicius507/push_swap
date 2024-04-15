/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lock.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 00:19:04 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 00:25:50 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>
#include <instructions/instructions.h>

int	has_unlocked(t_push_swap *push_swap)
{
	t_node	*node;

	node = push_swap->a->top;
	while (node != NULL)
	{
		if (!node->lock)
			return (1);
		node = node->next;
	}
	return (0);
}

char	should_relock(t_push_swap *push_swap, int locked)
{
	int		count;
	char	should;

	should = 0;
	sa(push_swap, 0);
	count = markup(push_swap, 0);
	if (count > locked)
		should = 1;
	sa(push_swap, 0);
	return (should);
}
