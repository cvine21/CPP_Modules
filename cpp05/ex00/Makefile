# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvine <cvine@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 15:15:31 by cvine             #+#    #+#              #
#    Updated: 2022/06/09 16:29:58 by cvine            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	bureaucrat

INCLUDE		=	include/

SRC_PATH	=	src/

HEADER		=	$(addprefix $(INCLUDE), Bureaucrat.hpp)

SRC			=	$(addprefix $(SRC_PATH), main.cpp	Bureaucrat.cpp)

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