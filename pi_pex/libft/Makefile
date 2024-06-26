
NAME        = libft.a
INCLUDE     = includes/
SRC_DIR     = srcs/
OBJ_DIR     = objs/
CC          = gcc
CFLAGS      = -Wall -Werror -Wextra -I $(INCLUDE)
RM          = rm -f
AR          = ar rcs

SRC_FILES   := $(wildcard $(SRC_DIR)*/*.c)
OBJ_FILES   := $(addprefix $(OBJ_DIR), $(SRC_FILES:$(SRC_DIR)%.c=%.o))

GREEN       = \033[0;92m
YELLOW 		= \033[0;33m
BLUE        = \033[0;94m
RESET       = \033[0m

all: $(OBJ_DIR) $(NAME)

$(NAME): $(OBJ_FILES)
		@$(AR) $(NAME) $(OBJ_FILES)
		@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built libft.a successfully! $(RESET)\n" "LIBFT"

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_DIR)
		@mkdir -p $(@D)
		@$(CC) $(CFLAGS) -c $< -o $@
		@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "LIBFT"

clean:
		@$(RM) -r $(OBJ_DIR)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)libft.a rebuilt!$(RESET)\n" "LIBFT"

.PHONY: all clean fclean re