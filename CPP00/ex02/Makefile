#COMPILATION
NAME		=	bank

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror --std=c++98

SRC			=	Account.cpp\
				tests.cpp

#Create Objects
PATH_OBJ	=	./obj/

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	Account.hpp\

all: $(NAME)

$(PATH_OBJ)%.o :	%.cpp $(HEADER)
	@printf "Generating object...\n"
	mkdir -p $(PATH_OBJ)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	@printf "\nGenerating cpp00 executable...\n"
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(PATH_OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

run:	$(NAME)
		./$(NAME)

valgrind:	$(NAME)
			valgrind ./$(NAME)
