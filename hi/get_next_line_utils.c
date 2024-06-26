/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:04:30 by marvin            #+#    #+#             */
/*   Updated: 2024/06/25 17:04:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *char_to_line(char *line,char c,int len)
{
	char *new;
	int i;

	i = 0;
	new = (char *)malloc(sizeof(len + 2));
	if (!new)
		return (NULL);
	if (i < len)
	{
		new[i] = line[i];
		i++;
	}
	new[len] = c;
	new[len + 1] = '\0';
	return (new);
}

size_t buffer_read(int fd, char *buffer, int *pos, int *size)
{
	*size = read(fd, buffer, BUFFER_SIZE);
	*pos = 0;
	return (*size);
}

char *read_it(int fd, char *buffer, int *pos, int *size)
{
    char	*line;
	int	len;
	char	c;

	line = NULL;
	len = 0;
	while (1)
	{
		if (*pos >= size)
		{
			if (read_it(fd, buffer, pos, size) <= 0)
			{
				if(len > 0)
					return (line);
				free(line);
				return (NULL);
			}
		}
		c = buffer[(*pos)++];
		line = char_to_line(line, c, len++);
		if(!line || c == '/n')
		{
			break;
		} 
	}
	return (line);
}