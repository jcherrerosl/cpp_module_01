CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address,leak

SRCS = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp 

OBJS = $(SRCS:.cpp=.o)

NAME = zombie

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
