/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:10:44 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:32:09 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/*
	called each time a philospher wants to eat
	-locks and unlocks both forks
	-locks the eating_check for safe updating of last_eat_timer
*/
void	philo_eats(t_philo *philo)
{
	t_data	*data;

	data = philo->data;
	pthread_mutex_lock(&(data->forks[philo->left_fork_id]));
	print_philo_actions(data, philo->id,
		"has taken a fork");
	pthread_mutex_lock(&(data->forks[philo->right_fork_id]));
	print_philo_actions(data, philo->id,
		"has taken a fork");
	pthread_mutex_lock(&(data->eating_check));
	print_philo_actions(data, philo->id,
		"is eating");
	philo->last_eat_time = get_time();
	pthread_mutex_unlock(&(data->eating_check));
	wait_duration(data, data->time_to_eat);
	philo->nb_times_ate++;
	pthread_mutex_unlock(&(data->forks[philo->left_fork_id]));
	pthread_mutex_unlock(&(data->forks[philo->right_fork_id]));
}

/*
	The thread of a philospher
	-starts the whole cycle of eating, thinking, sleeping until
	a philo dies
	-philos with odd indices start executing later on to minimize deadlocks
*/
void	*philo_func(void *arg)
{
	t_philo	*curr_philo;
	t_data	*data;

	curr_philo = (t_philo *)arg;
	data = curr_philo->data;
	if (curr_philo->id % 2)
		usleep(15000);
	while (!(data->any_died))
	{
		philo_eats(curr_philo);
		if (data->all_has_ate)
			break ;
		print_philo_actions(data, curr_philo->id,
			"is sleeping");
		wait_duration(data, data->time_to_sleep);
		print_philo_actions(data, curr_philo->id,
			"is thinking");
	}
	return (NULL);
}

/*
	creates all the philosopher threads
*/
int	create_philos(t_philo *philos, int nb_philos)
{
	int	i;

	i = 0;
	while (i < nb_philos)
	{
		pthread_create(&(philos[i].my_thread), NULL, &philo_func, &philos[i]);
		philos[i].last_eat_time = get_time();
		i++;
	}
	return (1);
}

/*
	Updates state of the program constantly
	-responsible for stopping the program from quiting while threads
	are executign aswell (the main loop)
*/
void	run_loop(t_data *data)
{
	int	i;

	while (!(data->all_has_ate))
	{
		i = 0;
		while (i < data->nb_philo && !(data->any_died))
		{
			pthread_mutex_lock(&(data->eating_check));
			if (get_time() - data->philos[i].last_eat_time >= data->time_to_die)
			{
				print_philo_actions(data, data->philos[i].id, "died");
				data->any_died = true;
			}
			pthread_mutex_unlock(&(data->eating_check));
			usleep(100);
			i++;
		}
		if (data->any_died)
			break ;
		perform_eat_checks(data);
	}
}

/*
	-manages the main execution loops
	-creates the philo threads and starts their execution
*/
int	philosophers(t_data *data)
{
	t_philo	*philosophers;
	int		i;

	i = 0;
	data->program_start = get_time();
	philosophers = data->philos;
	create_philos(philosophers, data->nb_philo);
	run_loop(data);
	while (i < data->nb_philo)
	{
		pthread_join(data->philos[i].my_thread, NULL);
		i++;
	}
	return (1);
}
