# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sclam <sclam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:52:30 by sclam             #+#    #+#              #
#    Updated: 2022/05/08 16:46:39 by sclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRC			=	main.cpp \
				zombieHorde.cpp \
				Zombie.cpp

HDRS		=	Zombie.hpp

COMP		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98

OBJS		=	$(SRC:.cpp=.o)

all	:	$(NAME)

$(OBJS):	$(HDRS)

$(NAME): $(OBJS)
	$(COMP) $(CPPFLAGS) -o $@ $^

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY	:	all clean fclean re