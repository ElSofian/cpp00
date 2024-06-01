# **************************************************************************** #
# VARIABLES

NAME        = megaphone
CC          = c++
CFLAGS      = -Wall -Wextra -Werror -std=c++98

# **************************************************************************** #
# COLORS

GREEN       = \033[0;32m
GREY        = \033[1;30m
PURPLE      = \033[0;35m
BLUE        = \033[0;94m
CYAN        = \033[0;36m
PINK        = \033[1;35m
RED         = \033[0;31m
END_COLOR   = \033[0;39m


# **************************************************************************** #
# RULES

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)
	@echo "$(GREEN)[Success]$(END_COLOR) Megaphone is ready !"

clean:
	@echo "$(GREY)[Clean]$(END_COLOR) No objects to delete. If you want to delete the executable, do $(BLUE)make fclean$(END_COLOR)"

fclean:
	@$(RM) $(NAME) a.out
	@echo "$(GREY)[Clean]$(END_COLOR) $(NAME) has been deleted"

re: fclean all
	@echo "$(PURPLE)[Rebuild]$(END_COLOR) Done."

.PHONY: all clean fclean re