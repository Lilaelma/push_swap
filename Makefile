NAME = push_swap
SRCS = main.c\
	   parsing.c\
	   stack.c\
	   quick_sort.c\
	   utils.c\
	   error.c

OBJS = ${SRCS:.c=.o}
DEPS = ${SRCS:.c=.d}
CC = gcc
CFLAGS = -Wall -Werror -Wextra -MMD -MP -g3
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)
	$(RM) $(DEPS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re

-include :$(DEPS)