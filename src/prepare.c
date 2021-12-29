/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 22:01:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/28 22:02:19 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <helpers/helpers.h>
#include <operations/operations.h>

void	prepare(t_push_swap *push_swap)
{
	push_swap->len = len(push_swap->a);
	if (push_swap->len == 0)
		return ;
	if (is_solved(push_swap))
		return ;
	get_sorted(push_swap);
	index_puzzle(push_swap);
}
