/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 00:16:31 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 01:55:14 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>

t_node	*loop_next(t_push_swap *push_swap, t_node *current)
{
	if (current->next == NULL)
		return (push_swap->a->top);
	return (current->next);
}

t_node	*loop_prev(t_push_swap *push_swap, t_node *current)
{
	if (current->previous == NULL)
		return (push_swap->a->bottom);
	return (current->previous);
}
