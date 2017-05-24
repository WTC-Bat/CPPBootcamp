NAME = Contacts
PTH = "./"
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -I$(PTH) $(PTH)Contact.cpp $(PTH)main.cpp -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all