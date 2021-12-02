/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:06:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:24:09 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(t_push_swap *push_swap)
{
	clear_stacks(push_swap);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
