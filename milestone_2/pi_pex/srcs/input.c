/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:07:10 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 16:42:08 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	init_input(t_input **input)
{
	(*input)->file1 = NULL;
	(*input)->cmd1 = NULL;
	(*input)->cmd2 = NULL;
	(*input)->file2 = NULL;
	(*input)->path1 = NULL;
	(*input)->path2 = NULL;
	(*input)->cmd1_args = NULL;
	(*input)->cmd2_args = NULL;
}

int	ft_get_args(t_input **input, char **argv, int argc)
{
	if (argc != 5)
	{
		ft_printf("Usage: file1 cmd1 cmd2 file2\n", argv[0]);
		return (0);
	}
	*input = (t_input *)malloc(sizeof(t_input));
	if (!input)
		return (0);
	init_input(input);
	(*input)->file1 = argv[1];
	(*input)->cmd1 = argv[2];
	(*input)->cmd1_args = ft_split((*input)->cmd1, ' ');
	(*input)->cmd2 = argv[3];
	(*input)->cmd2_args = ft_split((*input)->cmd2, ' ');
	(*input)->file2 = argv[4];
	return (1);
}
