/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:07:55 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/28 23:27:22 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>
#include <instructions/instructions.h>

void	smart_rotate_a(t_push_swap *push_swap, int n)
{
	if (n < 0)
	{
		while (n++)
			rra(push_swap);
		return ;
	}
	while (n--)
		ra(push_swap);
}

void	smart_rotate_b(t_push_swap *push_swap, int n)
{
	if (n < 0)
	{
		while (n++)
			rrb(push_swap);
		return ;
	}
	while (n--)
		rb(push_swap);
}
