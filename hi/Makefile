
OUT_DIR			= ./
SRC_DIR			= src/
INPUT_DIR		= $(SRC_DIR)input_handling/

SRC_FILES = 	$(SRC_DIR)main.c \
				$(SRC_DIR)input_handling.c \
				$(SRC_DIR)utils.c \
				$(SRC_DIR)philosophers.c \
				$(SRC_DIR)philo_utils.c \
				
GREEN       	= \033[0;92m
YELLOW 			= \033[0;33m
BLUE       		= \033[0;94m
RESET       	= \033[0m

EXEC			= philo
CC 				= gcc
CFLAGS 			= -Wall -Wextra -Werror -Iincludes
EXTRAFLAGS 		= -lreadline -lncurses	

LIBDIR 			= mylib
LIB 			= mylib.a

OBJ_DIR	= objs/
OBJ_FILES = $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.c=.o)))

all: $(OBJ_DIR) $(LIBDIR)/$(LIB) $(EXEC)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

$(EXEC): $(OBJ_FILES)
	@$(CC) $(CFLAGS) -o $(EXEC) $(OBJ_FILES) $(LIB) $(EXTRAFLAGS)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built Philosophers executable successfully! $(RESET)\n" "Minishell"
	


$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "Minishell"

$(LIBDIR)/$(LIB):
	@$(MAKE) -s -C $(LIBDIR)
	@cp $(LIBDIR)/$(LIB) .

clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -s -C $(LIBDIR) clean
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned object_files!$(RESET)\n" "Minishell"

fclean: clean
	@rm -f $(LIB)
	@$(MAKE) -s -C $(LIBDIR) fclean
	@rm -f $(EXEC)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned executable!$(RESET)\n" "Minishell"

re: fclean all
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Minishell executable rebuilt!$(RESET)\n" "Minishell"

.PHONY: all bonus clean fclean re