/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkanaan <hkanaan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:18:55 by hkanaan           #+#    #+#             */
/*   Updated: 2024/07/07 15:17:25 by hkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char **argv)
{
	t_data	*input;

	if (!check_for_args(argc, argv))
		return (1);
	input = fill_input(argv);
	if (!input)
	{
		ft_putendl_fd("Error: allocating memory", 2);
		return (1);
	}
	if (check_for_errors(input_valid(argc, argv, input)))
	{
		free_input(input);
		return (1);
	}
	create_philosophers(input);
	philosophers(input);
	free_input(input);
	return (0);
}
