/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:50:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/10/12 14:44:04 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	usage(const char *app)
{
	ft_printf(
		"usage: %s STACK\n"
		"sorts a stack of numbers using the Push Swap game rules\n\n"
		"Mandatory Arguments:\n"
		"\tSTACK: list of integers separated by spaces\n",
		app
		);
}

int	main(int argc, char *argv[])
{
	if (argparse(argc - 1, &argv[1]))
	{
		usage(argv[0]);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
