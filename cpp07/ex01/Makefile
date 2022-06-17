NAME		=	template

HEADER		=	iter.hpp

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

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