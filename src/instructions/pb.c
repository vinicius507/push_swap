/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:15:03 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:15:03 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	pb(t_push_swap *push_swap)
{
	t_node	*node;

	node = pop(push_swap->a);
	if (node == NULL)
		return ;
	push(node, push_swap->b);
	ft_printf("pb\n");
}
