/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:50:28 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/08 18:10:31 by vgoncalv         ###   ########.fr       */
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

#endif