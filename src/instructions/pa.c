/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:13:48 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 04:34:45 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <instructions/instructions.h>

void	pa(t_push_swap *push_swap, char print)
{
	t_node	*node;

	node = pop(push_swap->b);
	if (node == NULL)
		return ;
	push(node, push_swap->a);
	if (print)
		ft_printf("pa\n");
}
