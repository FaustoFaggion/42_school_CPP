NAME		=	materia
CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -g3

PATH_OBJ	=	./obj/

SRC			=	main.cpp\
				AMateria.cpp\
				Ice.cpp\
				Cure.cpp\
				ICharacter.cpp\
				Character.cpp\

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	AMateria.hpp\
				Ice.hpp\
				Cure.hpp\
				ICharacter.hpp\
				Character.hpp\
				
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

re:	fclean
	$(NAME)

run:	$(NAME)
	./$(NAME)

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
