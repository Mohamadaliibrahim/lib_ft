/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:04:41 by marvin            #+#    #+#             */
/*   Updated: 2024/06/25 17:04:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#include <stdlib.h>
#include <unistd.h>

char *read_it(int fd, char *buffer, int *pos, int *size);
char *get_next_line(int fd);
ssize_t buffer_read(int fd, char *buffer, int *pos, int *size);
char *char_to_line(char *line, char c, int len);


#endif