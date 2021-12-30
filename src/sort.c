/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:42:58 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 22:41:11 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <sorters/sorters.h>

void	sort(t_push_swap *push_swap)
{
	if (push_swap->len <= 5)
		small(push_swap);
	else
		big(push_swap);
}
