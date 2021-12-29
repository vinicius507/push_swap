/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:17:59 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 04:36:12 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	ss(t_push_swap *push_swap, char print)
{
	swap(push_swap->a);
	swap(push_swap->b);
	if (print)
		ft_printf("ss\n");
}
