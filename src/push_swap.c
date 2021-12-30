/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:50:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/14 22:21:40 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	main(int argc, char *argv[])
{
	t_push_swap	push_swap;

	ft_bzero(&push_swap, sizeof(push_swap));
	push_swap.a = argparse(argc - 1, &argv[1]);
	if (push_swap.a == NULL)
		error(&push_swap);
	push_swap.b = ft_calloc(1, sizeof(t_stack));
	if (push_swap.b == NULL)
		error(&push_swap);
	prepare(&push_swap);
	sort(&push_swap);
	clear_stacks(&push_swap);
	return (EXIT_SUCCESS);
}
