/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:38:53 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:34:52 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/*
	checks for inputed args if they are all numbers
*/
int	check_for_args(int argc, char **argv)
{
	int	i;

	if (argc != 5 && argc != 6)
	{
		ft_putstr_fd("Error, Usage: ", 2);
		ft_putstr_fd("./philosphers nb_of_phil time_to_die time_to_eat", 2);
		ft_putstr_fd("time_to_sleep (optional)nb_time_philo_eats\n", 2);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (!ft_str_numeric(argv[i]))
		{
			ft_putstr_fd("All arguments must be numeric\n", 2);
			return (0);
		}
		if (argv[i++][0] == '-')
		{
			ft_putstr_fd("No negative numbers allowed\n", 2);
			return (0);
		}
	}
	return (1);
}

/*
	-fills the data structed with required data from input
	-inits the arrays
*/
t_data	*fill_input(char **argv)
{
	t_data	*ans;

	ans = (t_data *)malloc(sizeof(t_data));
	if (!ans)
		return (NULL);
	ans->nb_philo = ft_atoi(argv[1]);
	ans->time_to_die = ft_atoi(argv[2]);
	ans->time_to_eat = ft_atoi(argv[3]);
	ans->time_to_sleep = ft_atoi(argv[4]);
	ans->any_died = false;
	ans->all_has_ate = false;
	ans->program_start = 0;
	ans->forks = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t)
			* ans->nb_philo);
	ans->philos = (t_philo *)malloc(sizeof(t_philo) * ans->nb_philo);
	if (!ans->philos || !ans->forks)
		return (NULL);
	ans->created = 0;
	return (ans);
}

/*
	creates all the mutexes needed by the program
*/
int	create_mutexes(t_data *data)
{
	int	i;

	if (pthread_mutex_init(&(data->eating_check), NULL))
		return (0);
	if (pthread_mutex_init(&(data->writing_check), NULL))
		return (0);
	i = data->nb_philo - 1;
	while (i >= 0)
	{
		if (pthread_mutex_init(&(data->forks[i]), NULL))
			return (0);
		i--;
	}
	data->created = 1;
	return (1);
}

/*
	fills the data of all philos
*/
void	create_philosophers(t_data *data)
{
	int	i;

	i = data->nb_philo - 1;
	while (i >= 0)
	{
		data->philos[i].id = i;
		data->philos[i].left_fork_id = i;
		data->philos[i].right_fork_id = (i + 1) % data->nb_philo;
		data->philos[i].nb_times_ate = 0;
		data->philos[i].last_eat_time = 0;
		data->philos[i].data = data;
		i--;
	}
}

/*
	-checks if input is in valid range
	-calls the mutex creation
*/
int	input_valid(int argc, char **argv, t_data *data)
{
	if (argc == 6)
	{
		data->nb_times_to_eat = ft_atoi(argv[5]);
		if (data->nb_times_to_eat <= 0)
			return (1);
	}
	else
		data->nb_times_to_eat = -1;
	if (data->nb_philo < 2)
		return (1);
	if (!create_mutexes(data))
		return (2);
	return (0);
}
