NAME		=	zombie

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g3

SRC			=	main.cpp\
				Zombie.cpp\
				newZombie.cpp\
				randomChump.cpp\

PATH_OBJ	= ./obj/

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	Zombie.hpp\

all:	$(NAME) 

$(PATH_OBJ)%.o:	%.cpp $(HEADER)
	@printf "\nGenerating object...\n"
	mkdir -p $(PATH_OBJ)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	@printf "\nGenerating CPP01 executable...\n"
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
		rm -rf $(NAME)

re: fclean all

run:	$(NAME)
		./$(NAME)

valgrind: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
