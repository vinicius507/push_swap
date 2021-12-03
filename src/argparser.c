/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/03 13:21:48 by vgoncalv         ###   ########.fr       */
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

static char	is_duplicate(int value, t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	while (node != NULL)
	{
		if (node->value == value)
			return (1);
		node = node->next;
	}
	return (0);
}

static t_node	*insert(const char *str_value, t_node *previous, t_stack *stack)
{
	int		value;
	t_node	*node;

	if (!string_is_numeric(str_value))
		return (NULL);
	value = ft_atoi(str_value);
	if (is_duplicate(value, stack))
		return (NULL);
	node = new_node(value, previous);
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
