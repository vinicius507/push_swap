/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:50:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 01:15:45 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_H
# define HELPERS_H

# include <push_swap.h>

/**
 * Sortes the puzzle into a private struct attribute _next_sort and _prev_sort
 * for future indexing.
 * @param push_swap
 */
void	get_sorted(t_push_swap *push_swap);

/**
 * Indexes the puzzle elements.
 * @param push_swap
 */
void	index_puzzle(t_push_swap *push_swap);

/**
 * Gets the distance of the node to the top of the stack.
 * @param stack
 * @param target
 */
int		distance(t_stack *stack, t_node *target);

/**
 * Smart rotates stack A
 * @param push_swap
 * @param node
 */
void	smart_rotate_a(t_push_swap *push_swap, t_node *node);

/**
 * Smart rotates stack B
 * @param push_swap
 * @param node
 */
void	smart_rotate_b(t_push_swap *push_swap, t_node *node);

void	smart_rotate_ab(t_push_swap *push_swap, t_node *na, t_node *nb);

/**
 * Smart rotates stack B
 * @param push_swap
 * @param set: if the markup should lock the nodes
 */
int		markup(t_push_swap *push_swap, char set);

/**
 * Checks if the stack A has any node with lock 0
 * @param push_swap
 */
int		has_unlocked(t_push_swap *push_swap);

/**
 * Checks if a `sa` gives a better markup
 * @param push_swap
 * @param locked: the previous locked count
 */
char	should_relock(t_push_swap *push_swap, int locked);

/**
 * Gets the next element at stack A as if it was a circular linked list
 * @param push_swap
 * @return either the next node or the top of the stack
 */
t_node	*loop_next(t_push_swap *push_swap, t_node *current);

/**
 * Gets the previous element at stack A as if it was a circular linked list
 * @param push_swap
 * @return either the previous node or the bottom of the stack
 */
t_node	*loop_prev(t_push_swap *push_swap, t_node *current);

#endif
