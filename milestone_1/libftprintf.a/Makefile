NAME = libftprintf.a

SOURCES = ft_printf.c ft_check.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strlen.c ft_utoa.c ft_itoa.c ft_strdup.c ft_check1.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)		

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re