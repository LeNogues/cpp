# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seb <seb@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 12:27:55 by sle-nogu          #+#    #+#              #
#    Updated: 2025/09/04 13:18:15 by seb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := PmergeMe
CC      := c++
CFLAGS  := -Wall -Wextra -std=c++98

SRC     := 	src/main.cpp \
			src/PmergeMe.cpp
	
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