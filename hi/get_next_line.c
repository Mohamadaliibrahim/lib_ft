/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:05:07 by marvin            #+#    #+#             */
/*   Updated: 2024/06/25 17:05:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char buff[BUFFER_SIZE];
    static int pos;
    static int size;

    if(BUFFER_SIZE < 1 || fd < 0)
        return (NULL);
    return(read_it(fd, buff, &pos, &size));
}