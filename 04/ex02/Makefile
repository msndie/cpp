# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sclam <sclam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:52:30 by sclam             #+#    #+#              #
#    Updated: 2022/05/16 14:52:59 by sclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02

SRC			=	main.cpp \
				AAnimal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp

HDRS		=	AAnimal.hpp \
				Dog.hpp \
				Cat.hpp \
				WrongAnimal.hpp \
				WrongCat.hpp \
				Brain.hpp

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