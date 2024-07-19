/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:14:20 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:31:27 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/*
	prints the action of a philospher while mutexing
	to stop interruption
*/
void	print_philo_actions(t_data *data, int philo_id,
			char *inst)
{
	pthread_mutex_lock(&(data->writing_check));
	printf("%ld ", get_time() - data->program_start);
	printf("%d ", philo_id);
	printf("%s", inst);
	printf("\n");
	pthread_mutex_unlock(&(data->writing_check));
}

/*
	a smarter version of sleep
*/
void	wait_duration(t_data *data, u_int64_t sleep_duration)
{
	u_int64_t	start_time;

	start_time = get_time();
	while (!(data->any_died))
	{
		if (get_time() - start_time >= sleep_duration)
			break ;
		usleep(50);
	}
}

/*
	checks if the program ended because all philosphers ate apropiatly
*/
void	perform_eat_checks(t_data *data)
{
	int	i;

	i = 0;
	while (data->nb_times_to_eat != -1 && i < data->nb_philo
		&& data->philos[i].nb_times_ate >= data->nb_times_to_eat)
		i++;
	if (i == data->nb_philo)
		data->all_has_ate = 1;
}
