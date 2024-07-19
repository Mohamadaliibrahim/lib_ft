/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:23:20 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 16:46:21 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	file1_to_pipe(int pipe_fd[2], t_input *input, char **envp)
{
	int		fd_input;
	char	**cmd1_args;

	fd_input = open(input->file1, O_RDONLY);
	if (fd_input == -1)
		return (0);
	dup2(fd_input, STDIN_FILENO);
	dup2(pipe_fd[1], STDOUT_FILENO);
	close(fd_input);
	close(pipe_fd[1]);
	close(pipe_fd[0]);
	cmd1_args = ft_split(input->cmd1, ' ');
	execve(input->path1, cmd1_args, envp);
	perror("execve cmd1");
	return (1);
}

int	pipe_to_file2(int pipe_fd[2], t_input *input, char **envp)
{
	int		fd_output;
	char	**cmd2_args;

	close(pipe_fd[1]);
	fd_output = open(input->file2, O_WRONLY | O_TRUNC | O_CREAT, 0777);
	if (fd_output == -1)
		return (0);
	dup2(pipe_fd[0], STDIN_FILENO);
	dup2(fd_output, STDOUT_FILENO);
	close(pipe_fd[0]);
	close(fd_output);
	cmd2_args = ft_split(input->cmd2, ' ');
	execve(input->path2, cmd2_args, envp);
	perror("execve cmd2");
	return (1);
}

int	pipex(t_input **input, char **envp)
{
	int		pipe_fd[2];
	pid_t	pid1;
	pid_t	pid2;

	pipe(pipe_fd);
	pid1 = fork();
	if (pid1 < 0)
		return (1);
	else if (pid1 == 0 && file1_to_pipe(pipe_fd, *input, envp) == 0)
		return (1);
	else
	{
		pid2 = fork();
		if (pid2 < 0)
			return (1);
		else if (pid2 == 0 && pipe_to_file2(pipe_fd, *input, envp) == 0)
			return (1);
		close(pipe_fd[0]);
		close(pipe_fd[1]);
		waitpid(pid1, NULL, 0);
		waitpid(pid2, NULL, 0);
		ft_free_input(input, 1);
	}
	return (0);
}

int	main(int argc, char *argv[], char **envp)
{
	t_input	*input;

	if (ft_get_args(&input, argv, argc) == 0 || ft_check_access(input) == 0)
		return (1);
	if (!valid_commands(&input, envp))
	{
		ft_free_input(&input, 1);
		return (1);
	}
	return (pipex(&input, envp));
}
