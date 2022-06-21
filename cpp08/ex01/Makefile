# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvine <cvine@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 11:17:10 by cvine             #+#    #+#              #
#    Updated: 2022/06/21 11:26:06 by cvine            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	span

INCL_PATH	=	include/

SRC_PATH	=	src/

HEADER		=	$(addprefix $(INCL_PATH), Span.hpp)

SRC			=	$(addprefix $(SRC_PATH), Span.cpp main.cpp)

OBJ			=	$(SRC:.cpp=.o)

CC			=	clang++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -I$(INCL_PATH)

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