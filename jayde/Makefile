# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshehab <hshehab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 17:23:53 by hshehab           #+#    #+#              #
#    Updated: 2024/07/08 15:26:31 by hshehab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXTRAFLAGS = -lreadline -lncurses

SRC = stack_implementation.c \
      stack_implementation1.c \
      stack_implementation2.c \
      stack_implementation3.c \
      stack_implementation4.c \
      stack_implementation5.c \
      stack_implementation6.c \
      stack_implementation7.c \
      stack_implementation8.c \
      stack_implementation9.c \
      stack_implementation10.c \
      stack_implementation11.c\
      stack_implementation12.c\
      stack_implementation13.c\
	  ft_split.c\
	  ft_atoi.c

OBJ = $(SRC:.c=.o)
EXEC = pushswap
LIBDIR = printf
LIB = libftprintf.a

all: $(LIBDIR)/$(LIB) $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ) $(LIB) $(EXTRAFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

$(LIBDIR)/$(LIB):
	$(MAKE) -C $(LIBDIR)
	cp $(LIBDIR)/$(LIB) .

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(EXEC) $(LIB)
	$(MAKE) -C $(LIBDIR) fclean
