/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argparser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:14:51 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/10/12 14:43:39 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argparse(int argc, char **argv)
{
	const char	*arg;

	while (argc--)
	{
		arg = argv[argc];
		while (*arg)
		{
			if (!ft_isdigit(*arg))
				return (1);
			arg++;
		}
	}
	return (0);
}
