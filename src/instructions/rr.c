/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:18:44 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:18:44 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	rr(t_push_swap *push_swap, char print)
{
	rotate(push_swap->a);
	rotate(push_swap->b);
	if (print)
		ft_printf("rr\n");
}
