# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 12:51:50 by psmolin           #+#    #+#              #
#    Updated: 2025/09/22 23:26:47 by psmolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CXX = g++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = \
		main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp
HEADERS = \
		Animal.hpp \
		Cat.hpp \
		Dog.hpp \
		Brain.hpp
OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
