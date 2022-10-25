NAME		=	convert
CC			=	c++

FLAGS		=	-Wall -Wextra -Werror  -std=c++98 -g3

PATH_OBJ	=	./obj/

SRC			=	main.cpp\
				DetectType.cpp\
				Convert.cpp\
				ConvertChar.cpp\
				ConvertInt.cpp\
				ConvertFloat.cpp\
				ConvertDouble.cpp\
				
OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	DetectType.hpp\
				Convert.hpp\
				ConvertChar.hpp\
				ConvertInt.hpp\
				ConvertFloat.hpp\
				ConvertDouble.hpp\

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
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) A

valgrind_: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) 32.4