/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 02:20:12 by vgoncalv          #+#    #+#             */
/*   Updated: 2021/12/30 02:55:45 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <helpers/helpers.h>

static char	check_single(char *argv)
{
	while (*argv)
	{
		if (*argv != '+' && *argv != '-' && !ft_isdigit(*argv))
			return (0);
		else if (*argv == '+' || *argv == '-')
			argv++;
		if (!ft_isdigit(*argv))
			return (0);
		while (ft_isdigit(*argv))
			argv++;
		if (*argv != ' ' && *argv != '\0')
			return (0);
		if (*argv == '\0')
			break ;
		argv++;
	}
	return (1);
}

static int	count_args(char **argv)
{
	int	counter;

	counter = 0;
	while (*argv)
	{
		argv++;
		counter++;
	}
	return (counter);
}

char	prepare_single_arg(int *argc, char ***argv)
{
	if (*argc == 1)
	{
		if (!check_single(**argv))
			return (0);
		*argv = ft_split(**argv, ' ');
		*argc = count_args(*argv);
	}
	return (1);
}

void	clear_args(char single_arg, char **argv)
{
	int	offset;

	if (!single_arg)
		return ;
	offset = 0;
	while (argv[offset] != NULL)
		free(argv[offset++]);
	free(argv);
}
