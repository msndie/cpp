# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sclam <sclam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:52:30 by sclam             #+#    #+#              #
#    Updated: 2022/05/17 14:36:09 by sclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00

SRC			=	main.cpp \
				Bureaucrat.cpp

HDRS		=	Bureaucrat.hpp

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