NAME = Phononock

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean: 
	rm -rf megaphone.o

fclean: clean
	rm -rf $(NAME)

re: fclean all