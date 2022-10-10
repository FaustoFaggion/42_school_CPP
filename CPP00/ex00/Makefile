NAME			=	megaphone

#PATH
SRC_PATH		= 	./src/
OBJ_PATH		= 	./obj/
INCLUDE_PATH	=	

#HEADERS
HEADER			= 	

#HEADRES PATH
I_OBJ			=	-I ./ \
					-I $(INCLUDE_PATH) \

#LINKING HEA

#COMPILATION
CC				= 	c++
CFLAGS			= 	-Wall -Wextra -Werror -std=c++98

SRC				=	main.cpp

OBJ				= 	$(SRC:%.cpp=$(OBJ_PATH)%.o)

VPATH			=	$(SRC_PATH)\

all:	$(NAME)

$(OBJ_PATH)%.o:	%.cpp
	@printf "\nGenerating object...\n"
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
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

