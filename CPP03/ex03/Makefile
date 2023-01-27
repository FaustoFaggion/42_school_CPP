NAME		=	diamond_trap

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -Wno-shadow -std=c++98

PATH_OBJ	=	./obj/

SRC			=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp\
				DiamondTrap.cpp\

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	ClapTrap.hpp\
				ScavTrap.hpp\
				FragTrap.hpp\
				DiamondTrap.hpp\

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
