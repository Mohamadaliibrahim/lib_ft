/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:16:00 by moassi            #+#    #+#             */
/*   Updated: 2024/06/18 16:54:52 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);

int		ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const*s2);
char	*ft_strchr(const char *s, int i);
char	*ft_substr(char const *s, unsigned int start, int len);
char	*ft_strdup(const char *s);

#endif