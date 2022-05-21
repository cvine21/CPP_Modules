NAME	=	megaphone

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

CC		=	g++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

.PHONY	=	all clean flcean re

all		:	$(NAME)

$(NAME)	:	$(OBJ)

%.o		:	%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(NAME)

re		: flcean all