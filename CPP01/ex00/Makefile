NAME = Zombie

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re