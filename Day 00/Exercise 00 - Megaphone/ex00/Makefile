NAME = megaphone
SRC = megaphone.cpp
OBJ = megaphone.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all