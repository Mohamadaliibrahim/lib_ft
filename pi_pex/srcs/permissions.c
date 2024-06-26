/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permissions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:08:24 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 17:02:23 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	ft_check_access(t_input *input)
{
	int	output;

	output = 1;
	if (access(input->file1, F_OK) == -1)
	{
		ft_printf("%s: %s\n", strerror(errno), input->file1);
		output = 0;
	}
	else if (access(input->file1, R_OK) == -1)
	{
		ft_printf("%s: %s\n", strerror(errno), input->file1);
		output = 0;
	}
	if (access(input->file2, F_OK) == 0)
	{
		if (access(input->file2, W_OK) == -1)
		{
			ft_printf("%s: %s\n", strerror(errno), input->file2);
			output = 0;
		}
	}
	if (output == 0)
		ft_free_input(&input, 0);
	return (output);
}
