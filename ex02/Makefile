# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/08 21:42:52 by onkeltag          #+#    #+#              #
#    Updated: 2025/02/09 15:00:49 by onkeltag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.c $(SRC_DIR)/Fixed.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/Fixed.o

NAME = ex02

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
