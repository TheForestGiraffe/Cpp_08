# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/07 14:05:13 by pecavalc          #+#    #+#              #
#    Updated: 2026/09/07 14:07:04 by pecavalc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp
OBJ := main.o
DEP := $(SRC:.cpp=.d)

CXX := c++
CXX_FLAGS := -Wall -Wextra -Werror -MMD -MP -std=c++98

all: $(OBJ)
	$(CXX) $(CXX_FLAGS) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

-include $(DEP)

clean:
	rm -f $(OBJ) $(DEP)

fclean: clean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re