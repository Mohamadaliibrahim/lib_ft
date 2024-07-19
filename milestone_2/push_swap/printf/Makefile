NAME = libftprintf.a

SRCS =  ft_printf.c \
		ft_printhexaB.c \
		ft_printhexaS.c \
		ft_printp.c \
		ft_printul.c \
		ft_printull.c \
		ft_putchar.c \
		ft_putint.c \
		ft_putstr.c \
		ft_printui.c \
		ft_strlen.c
		
CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I.

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
