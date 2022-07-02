# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sclam <sclam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 17:52:30 by sclam             #+#    #+#              #
#    Updated: 2022/05/05 15:29:32 by sclam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	accounts

SRC		=	Account.cpp \
			tests.cpp \

COMP	=	c++

WWW		=	-Wall -Wextra -Werror

STD		=	-std=c++98

OBJS	=	$(SRC:.cpp=.o)

%.o: %.cpp
	$(COMP) $(WWW) $(STD) -o $@ -c $<

$(NAME): $(OBJS)
	$(COMP) $(OBJS) -o $@

all : $(NAME)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all