/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 19:46:51 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static char	prepare(t_stack **stack)
{
	*stack = ft_calloc(1, sizeof(t_stack));
	if (stack == NULL)
		return (0);
	return (1);
}

static char	string_is_numeric(const char *str)
{
	if (str == NULL)
		return (0);
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str++))
			return (0);
	}
	return (1);
}

// TODO: search for duplicates
static t_node	*insert(const char *value, t_node *previous, t_stack *stack)
{
	t_node	*node;

	if (!string_is_numeric(value))
		return (NULL);
	node = new_node(ft_atoi(value), previous);
	if (node == NULL)
		return (NULL);
	if (previous != NULL)
		previous->next = node;
	else
		stack->top = node;
	node->previous = previous;
	return (node);
}

t_stack	*argparse(int argc, char **argv)
{
	int			counter;
	t_stack		*stack;
	t_node		*node;

	if (!prepare(&stack))
		return (NULL);
	node = NULL;
	counter = -1;
	while (++counter < argc)
	{
		node = insert(argv[counter], node, stack);
		if (node == NULL)
		{
			clear_stack(&stack);
			return (NULL);
		}
	}
	stack->bottom = node;
	return (stack);
}
