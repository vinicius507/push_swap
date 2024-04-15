/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:17:42 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:17:42 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	rrb(t_push_swap *push_swap, char print)
{
	reverse_rotate(push_swap->b);
	if (print)
		ft_printf("rrb\n");
}
