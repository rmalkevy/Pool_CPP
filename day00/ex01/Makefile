# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmalkevy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 20:40:36 by rmalkevy          #+#    #+#              #
#    Updated: 2017/03/14 15:52:17 by rmalkevy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = notebook

SRC = notebook.cpp notebook.class.cpp contactsSetters.class.cpp contactsGetters.class.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++

FLGS =

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

%.o: %.cpp
		$(CC) $(FLGS) -c $<

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all





