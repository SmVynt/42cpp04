# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/11 12:51:50 by psmolin           #+#    #+#              #
#    Updated: 2025/09/23 13:20:38 by psmolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
CXX = g++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = \
		main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp
HEADERS = \
		AMateria.hpp \
		Character.hpp \
		Cure.hpp \
		Ice.hpp
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
