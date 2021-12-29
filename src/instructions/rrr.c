/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 20:19:18 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:19:18 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <instructions/instructions.h>

void	rrr(t_push_swap *push_swap)
{
	reverse_rotate(push_swap->a);
	reverse_rotate(push_swap->b);
	ft_printf("rrr\n");
}
