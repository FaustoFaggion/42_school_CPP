NAME		=	dynamic_cast
CC			=	c++

FLAGS		=	-Wall -Wextra -Werror  -std=c++98 -g3 

PATH_OBJ	=	./obj/

SRC			=	main.cpp\
				Base.cpp\

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	Base.hpp\
				BaseA.hpp\
				BaseB.hpp\
				BaseC.hpp\
					

all:	$(NAME)

$(PATH_OBJ)%.o:	%.cpp $(HEADER)
	mkdir -p $(PATH_OBJ)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(PATH_OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

run:	$(NAME)
	./$(NAME)

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

valgrind_: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)