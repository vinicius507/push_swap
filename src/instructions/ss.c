/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:17:59 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/28 20:50:17 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	ss(t_push_swap *push_swap)
{
	swap(push_swap->a);
	swap(push_swap->b);
	ft_printf("ss\n");
}
