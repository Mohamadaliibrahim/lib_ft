/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:05:43 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 16:59:12 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*find_correct_path(char	**paths, char *cmd)
{
	int		i;
	char	*full_path;
	char	*temp;

	i = 0;
	while (paths[i])
	{
		temp = ft_strjoin(paths[i], "/");
		full_path = ft_strjoin(temp, cmd);
		free(temp);
		if (access(full_path, F_OK) == 0)
			return (full_path);
		free(full_path);
		i++;
	}
	return (NULL);
}

char	*find_cmd_path(char *cmd, char **envp)
{
	char	*path;
	int		i;
	char	**paths;
	char	*correct_path;

	i = 0;
	while (envp[i])
	{
		if (ft_strncmp(envp[i], "PATH=", 5) == 0)
		{
			path = envp[i] + 5;
			break ;
		}
		i++;
	}
	paths = ft_split(path, ':');
	correct_path = find_correct_path(paths, cmd);
	i = 0;
	while (paths[i])
	{
		free(paths[i]);
		i++;
	}
	free(paths);
	return (correct_path);
}

int	valid_commands(t_input **input, char **envp)
{
	(*input)->path1 = find_cmd_path(((*input)->cmd1_args)[0], envp);
	if (!(*input)->path1)
	{
		ft_printf("%s: %s\n", "command not found", ((*input)->cmd1_args)[0]);
		return (0);
	}
	(*input)->path2 = find_cmd_path(((*input)->cmd2_args)[0], envp);
	if (!(*input)->path2)
	{
		ft_printf("%s: %s\n", "command not found", ((*input)->cmd2_args)[0]);
		return (0);
	}
	return (1);
}
