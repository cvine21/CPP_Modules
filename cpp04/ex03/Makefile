# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvine <cvine@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 20:47:01 by cvine             #+#    #+#              #
#    Updated: 2022/06/07 22:08:36 by cvine            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	interface

INCLUDE		=	include/

SRC_PATH	=	src/

HEADER		=	$(addprefix $(INCLUDE), \
					AMateria.hpp\
					Cure.hpp			Ice.hpp\
					ICharacter.hpp		Character.hpp\
					IMateriaSource.hpp	MateriaSource.hpp)

SRC			=	$(addprefix $(SRC_PATH), \
					main.cpp			AMateria.cpp\
					Cure.cpp			Ice.cpp\
					Character.cpp		MateriaSource.cpp)

OBJ			=	$(SRC:.cpp=.o)

CC			=	clang++

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