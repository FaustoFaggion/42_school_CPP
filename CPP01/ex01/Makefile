NAME		=	zombie

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror --std=c++98

SRC			=	main.cpp\
				Zombie.cpp\
				zombieHorde.cpp\

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

