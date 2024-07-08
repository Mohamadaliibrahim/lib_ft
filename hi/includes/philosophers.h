/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 10:45:13 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:18:33 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "../mylib/ft_printf/includes/ft_printf.h"
# include "../mylib/get_next_line/includes/get_next_line.h"
# include "../mylib/libft/includes/libft.h"
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <aio.h>
# include <pthread.h>
# include <stdbool.h>

struct	s_data;

typedef struct s_philo {
	int				id;
	int				left_fork_id;
	int				right_fork_id;
	int				nb_times_ate;
	u_int64_t		last_eat_time;
	struct s_data	*data;
	pthread_t		my_thread;
}	t_philo;

typedef struct s_data {
	int				nb_philo;
	unsigned int	time_to_die;
	unsigned int	time_to_eat;
	unsigned int	time_to_sleep;
	int				nb_times_to_eat;
	int				nb_philo_eating;
	bool			any_died;
	bool			all_has_ate;
	u_int64_t		program_start;
	pthread_mutex_t	eating_check;
	pthread_mutex_t	writing_check;
	pthread_mutex_t	*forks;
	t_philo			*philos;
	int				created;
}	t_data;

int			check_for_errors(int validation_result);
int			input_valid(int argc, char **argv, t_data *data);
t_data		*fill_input(char **argv);
int			check_for_args(int argc, char **argv);

void		free_input(t_data *input);
u_int64_t	get_time(void);
void		sleep_ms(u_int64_t time);
void		create_philosophers(t_data *data);

int			philosophers(t_data *data);
void		print_philo_actions(t_data *data, int philo_id,
				char *inst);
void		wait_duration(t_data *data, u_int64_t sleep_duration);
void		perform_eat_checks(t_data *data);

#endif