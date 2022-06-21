NAME		=	find

INClUDE		=	easyfind.hpp

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

.PHONY		=	all clean flcean re

all			:	$(NAME)

$(NAME)		:	$(OBJ) $(INClUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o			:	%.cpp $(INClUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean		:
	$(RM) $(OBJ)

fclean		:	clean
	$(RM) $(NAME)

re			: fclean all