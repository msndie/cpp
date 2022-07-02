# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sclam <sclam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:52:30 by sclam             #+#    #+#              #
#    Updated: 2022/05/16 17:49:44 by sclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex03

SRC			=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				Cure.cpp \
				Ice.cpp \
				MateriaSource.cpp

HDRS		=	AMateria.hpp \
				Character.hpp \
				Cure.hpp \
				Ice.hpp \
				MateriaSource.hpp \
				IMateriaSource.hpp \
				ICharacter.hpp

COMP		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow

OBJS		=	$(SRC:.cpp=.o)

all : $(NAME)

$(OBJS):	$(HDRS)

$(NAME): $(OBJS)
	$(COMP) $(CPPFLAGS) -o $@ $^

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all