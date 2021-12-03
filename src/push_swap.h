/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:51:38 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/03 13:33:38 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*previous;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

/**
 * Clears the stacks and exits with EXIT_FAILURE
 * @param push_swap
 */
void	error(t_push_swap *push_swap);

/**
 * Checks if the push_swap puzzle is solved
 * @param push_swap
 * @return char
 */
char	is_solved(t_push_swap *push_swap);

/**
 * Creates a new node
 * @param value node value
 * @return t_node *
 */
t_node	*new_node(int value, t_node *previous);

/**
 * Parses argv to a stack
 * @param argc arguments count
 * @param argv arguments to be parsed
 * @return t_stack *
 */
t_stack	*argparse(int argc, char **argv);

/**
 * Clears a stack
 * @param stack stack to be cleared
 */
void	clear_stack(t_stack **stack);

/**
 * Clears both stacks A and B
 * @param push_swap
 */
void	clear_stacks(t_push_swap *push_swap);

#endif
