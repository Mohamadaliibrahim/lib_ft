/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:37:58 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:20:16 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/*
	frees everything in the input structure
*/
void	free_input(t_data *input)
{
	int	i;

	if (input->created)
	{
		pthread_mutex_destroy(&(input->eating_check));
		pthread_mutex_destroy(&(input->writing_check));
		i = input->nb_philo - 1;
		while (i >= 0)
		{
			pthread_mutex_destroy(&(input->forks[i]));
			i--;
		}		
	}
	free(input->forks);
	free(input->philos);
	free(input);
}

/*
	returns the time in milliseconds,
	uses uint64 to gurrantee value is always in 64 bites
*/
u_int64_t	get_time(void)
{
	struct timeval	tv;

	if (gettimeofday(&tv, 0))
		return (0);
	return ((tv.tv_sec * (u_int64_t)1000) + (tv.tv_usec / 1000));
}

/*
	sleeps in milliseconds to make calculations easier
*/
void	sleep_ms(u_int64_t time)
{
	u_int64_t	new_time;

	new_time = time * 1000;
	usleep(new_time);
}

/*
	checks for erros in inputs
*/
int	check_for_errors(int validation_result)
{
	if (validation_result == 1)
	{
		ft_putendl_fd("Error: make sure input is in valid range", 2);
		return (1);
	}
	else if (validation_result == 2)
	{
		ft_putendl_fd("Error: creating mutexes", 2);
		return (1);
	}
	return (0);
}
