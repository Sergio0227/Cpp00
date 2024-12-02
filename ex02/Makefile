SRC			=	main.cpp

OBJS		= ${SRC:.cpp=.o}
NAME		= dreamJob
CFLAGS		= -Werror -Wall -Wextra
CPPFLAGS	= -std=c++98
CC			= c++
RM			= rm -rf

# Define colors
DEF_COLOR = \033[0;39m
ORANGE = \033[0;33m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[1;92m
YELLOW = \033[1;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: ${NAME}

${NAME}: ${OBJS}
	@echo "$(ORANGE)[The Job Of Your Dreams]:$(DEF_COLOR) Linking object files to create executable $(GREEN)${NAME}$(DEF_COLOR)"
	@${CC} ${CFLAGS} ${CPPFLAGS} ${OBJS} -o ${NAME}
	@echo "$(ORANGE)[The Job Of Your Dreams]:$(DEF_COLOR) exec file $(GREEN)=> Created!$(DEF_COLOR)"

%.o: %.c
	@echo "Compiling $< with flags \"${CFLAGS}\" and \"${CPPFLAGS}\""
	@${CC} ${CFLAGS} ${CPPFLAGS} -c $< -o $@
	@echo "$(GREEN)Compilation of $< success$(DEF_COLOR)"

clean:
	@${RM} ${OBJS}
	@echo -n "$(CYAN)[The Job Of Your Dreams]:$(DEF_COLOR) object files$(RED) \t => Removed!$(DEF_COLOR)\n";

fclean: clean
	@echo -n "$(CYAN)[The Job Of Your Dreams]:$(DEF_COLOR) exec. files$(RED)  => Removed!$(DEF_COLOR)\n";
	@${RM} ${NAME};


re: fclean ${NAME}

.PHONY: all clean fclean re
