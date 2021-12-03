/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:13:48 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:13:48 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	pa(t_push_swap *push_swap)
{
	t_node	*node;

	node = pop(push_swap->b);
	if (node == NULL)
		return ;
	push(node, push_swap->a);
}
