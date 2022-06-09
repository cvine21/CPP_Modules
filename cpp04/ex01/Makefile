NAME		=	brain

INCLUDE		=	include/

SRC_PATH	=	src/

HEADER		=	$(addprefix $(INCLUDE), WrongAnimal.hpp	WrongCat.hpp\
										Animal.hpp		Cat.hpp\
										Dog.hpp			Brain.hpp)

SRC			=	$(addprefix $(SRC_PATH), WrongAnimal.cpp	WrongCat.cpp\
										 Animal.cpp			Cat.cpp\
										 Dog.cpp			Brain.cpp\
										 main.cpp)

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -I$(INCLUDE)

.PHONY		=	all clean flcean re

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o			:	%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean		:
	$(RM) $(OBJ)

fclean		:	clean
	$(RM) $(NAME)

re			: fclean all