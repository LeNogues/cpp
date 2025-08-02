# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sle-nogu <sle-nogu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/28 11:56:25 by sle-nogu          #+#    #+#              #
#    Updated: 2025/07/29 13:05:21 by sle-nogu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := ex01
CC      := c++
CFLAGS  := -Wall -Wextra -Werror -std=c++98

SRC     := 	main.cpp \
			src/Animal.cpp \
			src/WrongAnimal.cpp \
			src/Cat.cpp \
			src/WrongCat.cpp \
			src/Dog.cpp \
			src/Brain.cpp

OBJ_DIR := obj
OBJS    := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

# Règles

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile les .cpp en .o dans obj/, en créant les sous-dossiers si nécessaire
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)  
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re