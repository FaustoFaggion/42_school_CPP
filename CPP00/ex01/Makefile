NAME			=	phonebook

#PATH
OBJ_PATH		= 	./obj/

#HEADERS
HEADER			= 	main.hpp\
					phonebook.hpp\
					contact.hpp\


#HEADRES PATH
I_OBJ			=

#LINKING HEA

#COMPILATION
CC				= 	c++
CFLAGS			= 	-Wall -Wextra -Werror -std=c++98

SRC				=	main.cpp\
					phonebook.cpp\
					contact.cpp\
					

OBJ				= 	$(SRC:%.cpp=$(OBJ_PATH)%.o)

VPATH			=

all:	$(NAME)

$(OBJ_PATH)%.o:	%.cpp $(HEADER)
	@printf "\nGenerating object...\n"
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	@printf "\nGenerating cpp00 executable...\n"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
		rm -rf $(NAME)

re: fclean all

run:	$(NAME)
		./$(NAME)

valgrind:	$(NAME)
			valgrind ./$(NAME)

