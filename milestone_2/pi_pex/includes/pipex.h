/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:23:34 by moassi            #+#    #+#             */
/*   Updated: 2024/06/20 16:39:54 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <stdio.h>
# include <errno.h>
# include <string.h>
# include "../libft/includes/ft_printf.h"
# include "../libft/includes/libft.h"
# include "../libft/includes/get_next_line.h"

typedef struct s_input
{
	char	*file1;
	char	*cmd1;
	char	**cmd1_args;
	char	*cmd2;
	char	**cmd2_args;
	char	*file2;
	char	*path1;
	char	*path2;
}	t_input;

int		ft_get_args(t_input **input, char **argv, int argc);
int		ft_check_access(t_input *input);
void	ft_free_input(t_input **input, int with_path);
int		valid_commands(t_input **input, char **envp);
void	ft_free_input(t_input **input, int with_path);
void	init_input(t_input **input);

#endif