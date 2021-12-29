/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 22:51:38 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/28 22:05:17 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
	struct s_node	*previous;
	struct s_node	*_next_sort;
	struct s_node	*_prev_sort;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	t_node	*_top_sort;
	t_node	*_bottom_sort;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
	uint	len;
}	t_push_swap;

/**
 * Clears the stacks and exits with EXIT_FAILURE
 * @param push_swap
 */
void	error(t_push_swap *push_swap);

/**
 * Checks if the push_swap puzzle is solved
 * @param push_swap
 */
char	is_solved(t_push_swap *push_swap);

/**
 * Creates a new node
 * @param value node value
 */
t_node	*new_node(int value, t_node *previous);

/**
 * Parses argv to a stack
 * @param argc arguments count
 * @param argv arguments to be parsed
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

/**
 * Prepares for the sorting
 * @param push_swap
 */
void	prepare(t_push_swap *push_swap);

/**
 * Sorts the puzzle's stack
 * @param push_swap
 */
void	sort(t_push_swap *push_swap);

#endif
