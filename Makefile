CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = bits
SRC = srcs/*.c main.c
INCLUDES = includes/*.h

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -I $(INCLUDES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

