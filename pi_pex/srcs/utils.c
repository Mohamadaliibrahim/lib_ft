/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:04:44 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 17:02:35 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_free_input(t_input **input, int with_path)
{
	int	i;

	i = 0;
	while (((*input)->cmd1_args)[i])
	{
		free(((*input)->cmd1_args)[i]);
		i++;
	}
	free(((*input)->cmd1_args));
	i = 0;
	while (((*input)->cmd2_args)[i])
	{
		free(((*input)->cmd2_args)[i]);
		i++;
	}
	free(((*input)->cmd2_args));
	if (with_path)
	{
		free((*input)->path1);
		free((*input)->path2);
	}
	free (*input);
}
