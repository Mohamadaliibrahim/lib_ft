NAME 			= pipex
INCLUDES		= includes/


LIBFT_DIR		= libft/
LIBFT_INCLUDES	= $(LIBFT_DIR)includes

SRC_DIR			= srcs/
SRC_FILES		= $(SRC_DIR)pipex.c $(SRC_DIR)permissions.c $(SRC_DIR)input.c $(SRC_DIR)cmd_path.c $(SRC_DIR)utils.c

# BONUS_FILES		= $(DLL_DIR)ft_dll_addback.c $(DLL_DIR)ft_dll_addfront.c
					

OBJ_DIR			= objs/
OBJ_FILES		= $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.c=.o)))
# BONUS_OBJ_FILES	= $(addprefix $(OBJ_DIR), $(notdir $(BONUS_FILES:.c=.o)))

CFLAGS			= -Wall -Wextra -Werror
GCC 			= cc
RM				= rm -f

GREEN       = \033[0;92m
YELLOW 		= \033[0;33m
BLUE        = \033[0;94m
RESET       = \033[0m

all : $(OBJ_DIR) $(NAME)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

$(NAME): $(LIBFT_DIR)libft.a $(OBJ_FILES)
	@$(GCC) $(CFLAGS) -o $@ $(OBJ_FILES) $(LIBFT_DIR)libft.a
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built Push-Swap executable successfully! $(RESET)\n" "PUSH-SWAP"

# bonus : $(OBJ_DIR) $(BONUS_NAME)

# $(BONUS_NAME): $(LIBFT_DIR)libft.a $(BONUS_OBJ_FILES)
# 	@$(GCC) $(CFLAGS) -o $@ $(BONUS_OBJ_FILES) $(LIBFT_DIR)libft.a
# 	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Built Checker (Bonus) executable successfully! $(RESET)\n" "BONUS"

$(LIBFT_DIR)libft.a:
	@make -s -C $(LIBFT_DIR)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(GCC) $(CFLAGS) -c $< -o $@
	@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "PUSH-SWAP"

# $(OBJ_DIR)%.o : $(BONUS_DIR)%.c | $(OBJ_DIR)
# 	@$(GCC) $(CFLAGS) -c $< -o $@
# 	@printf "$(BLUE)%-10s:$(RESET) $(YELLOW)Compiled $<$(RESET)\n" "PUSH-SWAP"

clean : 
	@$(MAKE) -s -C $(LIBFT_DIR) clean
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned object files!$(RESET)\n" "LIBFT"
	@$(RM) -r $(OBJ_DIR)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned object files!$(RESET)\n" "PIPEX"

fclean : clean
	@$(MAKE) -s -C $(LIBFT_DIR) fclean
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned executables!$(RESET)\n" "LIBFT"
	@$(RM) -r $(NAME)
	@$(RM) -r $(BONUS_NAME)
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)Cleaned executables!$(RESET)\n" "PIPEX"

re : fclean all
	@printf "$(BLUE)%-10s:$(RESET) $(GREEN)PIPEX executable rebuilt!$(RESET)\n" "PIPEX"

.PHONY: all bonus clean fclean re