C= gcc
FLAGS = -Wall -Wextra -Werror
<<<<<<< HEAD
NAME = cp
SRC = srcs/*.c main.c
INCLUDES = includes/stack.h

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -I $(INCLUDES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

