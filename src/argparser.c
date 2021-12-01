/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/01 09:18:36 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*set_value_and_alloc_next(t_node *current, const char *value)
{
	t_node	*node;

	current->value = ft_atoi(value);
	node = ft_calloc(1, sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->previous = current;
	current->next = node;
	return (node);
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

t_node	*argparse(int argc, char **argv)
{
	const char	*arg;
	int			counter;
	t_node		*head;
	t_node		*node;

	node = ft_calloc(1, sizeof(t_node));
	if (node == NULL)
		return (NULL);
	head = node;
	counter = -1;
	while (++counter < argc && head != NULL)
	{
		arg = argv[counter];
		if (!string_is_numeric(arg))
		{
			clear_nodes(&head);
			break ;
		}
		node = set_value_and_alloc_next(node, arg);
		if (node == NULL)
			clear_nodes(&head);
	}
	return (head);
}
