# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/07 14:05:13 by pecavalc          #+#    #+#              #
#    Updated: 2026/09/10 11:07:56 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Span.cpp
OBJ := main.o Span.o

CXX := c++
CXX_FLAGS := -Wall -Wextra -Werror -std=c++98

all: $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re