/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 03:10:42 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>
#include <helpers/helpers.h>

static char	prepare_args(t_stack **stack)
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
	int				value;
	long long int	ll_value;
	t_node			*node;

	if (!string_is_numeric(str_value))
		return (NULL);
	ll_value = ft_atoll(str_value);
	value = ft_atoi(str_value);
	if (ll_value != value)
		return (NULL);
	if (is_duplicate(value, stack))
		return (NULL);
	node = new_node(value, previous);
	if (node == NULL)
		return (NULL);
	if (previous == NULL)
	{
		stack->top = node;
		stack->_top_sort = node;
	}
	node->previous = previous;
	return (node);
}

t_stack	*argparse(int argc, char **argv)
{
	int			counter;
	char		single;
	t_stack		*stack;
	t_node		*node;

	single = argc == 1;
	if (!prepare_args(&stack) || !prepare_single_arg(&argc, &argv))
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
	stack->_bottom_sort = node;
	clear_args(single, argv);
	return (stack);
}
