/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:07:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 22:40:01 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>
#include <instructions/instructions.h>

void	smart_rotate_a(t_push_swap *push_swap, t_node *node)
{
	int	dist;

	dist = distance(push_swap->a, node);
	if (dist < 0)
	{
		while (dist++)
			rra(push_swap, 1);
		return ;
	}
	while (dist--)
		ra(push_swap, 1);
}

void	smart_rotate_b(t_push_swap *push_swap, t_node *node)
{
	int	dist;

	dist = distance(push_swap->b, node);
	if (dist < 0)
	{
		while (dist++)
			rrb(push_swap, 1);
		return ;
	}
	while (dist--)
		rb(push_swap, 1);
}
