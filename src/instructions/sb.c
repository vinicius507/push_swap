/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:13:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:13:28 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	sb(t_push_swap *push_swap, char print)
{
	swap(push_swap->b);
	if (print)
		ft_printf("sb\n");
}
