/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:27:16 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/26 17:27:27 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*getdata(int fd, char *data, char *memold)
{
	char	*temp;
	ssize_t	reading;

	reading = 1;
	while (reading)
	{
		reading = read(fd, data, BUFFER_SIZE);
		if (reading == 0)
			break ;
		else if (reading == -1)
		{
			return (NULL);
		}
		data[reading] = '\0';
		if (!memold)
			memold = ft_strdup("");
		temp = memold;
		memold = ft_strjoin(temp, data);
		free(temp);
		if (ft_strchr(data, '\n'))
			break ;
	}
	return (memold);
}

char	*gettline(char *line, char **memold)
{
	int		i;
	char	*temp;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
	{
		temp = ft_substr(line, 0, i + 1);
		*memold = ft_strdup(line + i + 1);
		if (**memold == '\0')
		{
			free(*memold);
			*memold = NULL;
		}
	}
	else
	{
		temp = ft_strdup(line);
		*memold = NULL;
	}
	free(line);
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*data;
	static char	*memold;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	data = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!data)
		return (NULL);
	line = getdata(fd, data, memold);
	if (!line)
	{	
		free(memold);
		free(data);
		return (NULL);
	}
	line = gettline(line, &memold);
	if (*line == '\0')
	{
		free(line);
		return (NULL);
	}
	free(data);
	return (line);
}
