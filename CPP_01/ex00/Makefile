GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;96m
RED = \033[1;31m
RESET = \033[0;39m

NAME = zombie
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS_DIR = objs/

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(YELLOW)Linking $(NAME)...$(RESET)"
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o:%.cpp
	@mkdir -p $(dir $@)
	@printf "$(BLUE)Compiling $<... $(RESET)"
	@$(CC) $(FLAGS) -c $< -o $@
	@printf "\b$(GREEN)OK!$(RESET)\n"

clean:
	@rm -rf $(OBJS_DIR)
	@printf "$(RED)Objects cleaned...$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)Executable cleaned...$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
