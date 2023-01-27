NAME		=	form2
CC			=	c++

FLAGS		=	-Wall -Wextra -Werror  -std=c++98 -g3

PATH_OBJ	=	./obj/

SRC			=	main.cpp\
				Bureaucrat.cpp\
				AForm.cpp\
				ShrubberyCreationForm.cpp\
				RobotomyRequestForm.cpp\
				PresidentialPardonForm.cpp\


OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	Bureaucrat.hpp\
				AForm.hpp\
				ShrubberyCreationForm.hpp\
				RobotomyRequestForm.hpp\
				PresidentialPardonForm.hpp\

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

re:	fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
