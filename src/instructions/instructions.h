/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:33:06 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/29 04:34:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include <operations/operations.h>

/**
 * Instruction pa
 * @param push_swap
 * @param print
 */
void	pa(t_push_swap *push_swap, char print);

/**
 * Instruction pb
 * @param push_swap
 * @param print
 */
void	pb(t_push_swap *push_swap, char print);

/**
 * Instruction ra
 * @param push_swap
 * @param print
 */
void	ra(t_push_swap *push_swap, char print);

/**
 * Instruction rb
 * @param push_swap
 * @param print
 */
void	rb(t_push_swap *push_swap, char print);

/**
 * Instruction rra
 * @param push_swap
 * @param print
 */
void	rra(t_push_swap *push_swap, char print);

/**
 * Instruction rrb
 * @param push_swap
 * @param print
 */
void	rrb(t_push_swap *push_swap, char print);

/**
 * Instruction rr
 * @param push_swap
 * @param print
 */
void	rr(t_push_swap *push_swap, char print);

/**
 * Instruction rrr
 * @param push_swap
 * @param print
 */
void	rrr(t_push_swap *push_swap, char print);

/**
 * Instruction sa
 * @param push_swap
 * @param print
 */
void	sa(t_push_swap *push_swap, char print);

/**
 * Instruction sb
 * @param push_swap
 * @param print
 */
void	sb(t_push_swap *push_swap, char print);

/**
 * Instruction ss
 * @param push_swap
 * @param print
 */
void	ss(t_push_swap *push_swap, char print);

#endif
