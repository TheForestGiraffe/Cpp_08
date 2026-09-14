# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/14 11:56:54 by pecavalc          #+#    #+#              #
#    Updated: 2026/09/14 12:11:21 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ex02
SRC := main.cpp
OBJ := main.o
DEP := $(SRC:.cpp=.d)

CXX := c++
CXX_FLAGS := -Wall -Wextra -Werror -MMD -MP -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

-include $(DEP) 

clean:
	-rm -f $(OBJ) $(DEP)

fclean: clean
	-rm $(NAME)

re: fclean all

.PHONY: all clean fclean re