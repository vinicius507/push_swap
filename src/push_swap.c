/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:50:49 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 19:58:57 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	print_stack(t_stack *stack)
{
	t_node	*current;

	current = stack->top;
	ft_printf("[\n");
	while (current != NULL)
	{
		ft_printf("\t%x %x:%d %x",
			((unsigned long)current->previous) & 0xffffff,
			((unsigned long)current) & 0xffffff,
			current->value,
			((unsigned long)current->next) & 0xffffff);
		if (current->next != NULL)
			ft_printf(",\n");
		current = current->next;
	}
	ft_printf("\n]\n");
}

int	main(int argc, char *argv[])
{
	t_push_swap	push_swap;

	ft_bzero(&push_swap, sizeof(push_swap));
	push_swap.a = argparse(argc - 1, &argv[1]);
	if (push_swap.a == NULL)
		error(&push_swap);
	return (EXIT_SUCCESS);
}
