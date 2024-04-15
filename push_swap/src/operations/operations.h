/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:20:45 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 18:55:59 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include <push_swap.h>

/**
 * Gets the length of a stack
 * @param stack
 */
size_t	len(t_stack *stack);

/**
 * Removes the first element of a stack
 * @param stack
 */
t_node	*pop(t_stack *stack);

/**
 * Removes the last element of a stack
 * @param stack
 */
t_node	*pop_bottom(t_stack *stack);

/**
 * Inserts an element at the top of the stack
 * @param node
 * @param stack
 */
void	push(t_node *node, t_stack *stack);

/**
 * Inserts an element at the bottom of the stack
 * @param node
 * @param stack
 */
void	push_bottom(t_node *node, t_stack *stack);

/**
 * Swaps the first two elements of a stack
 * @param stack
 */
void	swap(t_stack *stack);

/**
 * Removes the first element of the stack and places it at the bottom
 * @param stack
 */
void	rotate(t_stack *stack);

/**
 * Removes the first element of the stack and places it at the bottom
 * @param stack
 */
void	reverse_rotate(t_stack *stack);

#endif
