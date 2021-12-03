/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:33:06 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/02 20:27:34 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include <operations/operations.h>

/**
 * Instruction pa
 * @param push_swap */
void	pa(t_push_swap *push_swap);

/**
 * Instruction pb
 * @param push_swap */
void	pb(t_push_swap *push_swap);

/**
 * Instruction ra
 * @param push_swap */
void	ra(t_push_swap *push_swap);

/**
 * Instruction rb
 * @param push_swap */
void	rb(t_push_swap *push_swap);

/**
 * Instruction rra
 * @param push_swap */
void	rra(t_push_swap *push_swap);

/**
 * Instruction rrb
 * @param push_swap */
void	rrb(t_push_swap *push_swap);

/**
 * Instruction rr
 * @param push_swap */
void	rr(t_push_swap *push_swap);

/**
 * Instruction rrr
 * @param push_swap */
void	rrr(t_push_swap *push_swap);

/**
 * Instruction sa
 * @param push_swap */
void	sa(t_push_swap *push_swap);

/**
 * Instruction sb
 * @param push_swap */
void	sb(t_push_swap *push_swap);

/**
 * Instruction ss
 * @param push_swap */
void	ss(t_push_swap *push_swap);

#endif
