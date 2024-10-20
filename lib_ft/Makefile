# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohamibr <mohamibr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 18:01:18 by mohamibr          #+#    #+#              #
#    Updated: 2024/10/20 15:25:56 by mohamibr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = \
		srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c srcs/ft_isprint.c \
		srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_strmapi.c \
		srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c \
		srcs/ft_strrchr.c srcs/ft_strncmp.c srcs/ft_memchr.c srcs/ft_memcmp.c srcs/ft_strnstr.c srcs/ft_atoi.c \
		srcs/ft_calloc.c srcs/ft_strdup.c srcs/ft_substr.c srcs/ft_strjoin.c srcs/ft_strtrim.c srcs/ft_putchar_fd.c \
		srcs/ft_putstr_fd.c srcs/ft_putendl_fd.c srcs/ft_putnbr_fd.c srcs/ft_striteri.c srcs/ft_split.c srcs/ft_itoa.c


OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS)
	$(AR) -r $(NAME) $?

srcs%.o: srcs%.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)		

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
