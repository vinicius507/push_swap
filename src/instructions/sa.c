/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:12:24 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 04:35:52 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	sa(t_push_swap *push_swap, char print)
{
	swap(push_swap->a);
	if (print)
		ft_printf("sa\n");
}
