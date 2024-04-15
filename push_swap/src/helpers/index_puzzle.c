/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_puzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:33:09 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/13 21:11:54 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>

void	index_puzzle(t_push_swap *push_swap)
{
	size_t	index;
	t_node	*node;

	index = 0;
	node = push_swap->a->_top_sort;
	while (node != NULL)
	{
		node->index = index++;
		node = node->_next_sort;
	}
}
